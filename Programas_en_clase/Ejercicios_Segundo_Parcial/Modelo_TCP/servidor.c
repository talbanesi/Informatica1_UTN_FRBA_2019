#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <arpa/inet.h>

// Forma de ejecutar el programa: ./server "NUM_PORT"

#define BACKLOG_LISTEN 5 //Numero de conexiones permitidas en la cola de entrada

void main(int argc, char **argv){

	int sockfd; //Descriptor de socket que usaremos para establecer la conexion

	struct sockaddr_in server_addr; // Estrcutura que contendra la informacion del servidor

	struct sockaddr_in client_addr; // Estructura que, una vez realizado el accept() almacenara la informacion del cliente

	unsigned short int my_port;

	int bind_to_port; // Variable para almacenar lo devuelto por la funcion bind()

	int listen_var; // Variable para almacenar lo devuelto por la funcion listen()

	int newsockfd; // Nuevo socket creado cuando se conecta un cliente mediante accept() por el cual el servidor se comunicara con ese cliente
	
	int n; //Variable en la que almacenaremos la cantidad de bytes escritos o leidos.

	int status = 1;

	socklen_t tam_client;

	char buffer[256];

	if(argc<2){

		perror("Error. Debe ingresar mas argumentos.");
		return;

	}

	sockfd = socket(AF_INET,SOCK_STREAM,0);

	// AF_INET == dominio de los sockets de red de UNIX
	// SOCK_STREAM == tipo orientado a establecer un flujo de datos, es decir, TCP
	// 0 == deberia ir el protocolo, pero se coloca 0 para que el sistema elija el adecuado

	if(sockfd < 0){

		perror("\nError al abrir el socket.\n");
		return;

	}

	// Ahora debo armar la estructura con la direccion ip y numero de puerto.
	// Para luego poder realizar bind(), funcion encargada de atar el socket al puerto.

	// Estructura sockaddr_in

	/*

	struct sockaddr_in{
	
		short int 		      sin_family; // Familia de direcciones, AF_INET
		unsigned short int    sin_port; // Numero de puerto
		struct in_addr        sin_addr; // Estrcutura que contiene la direccion de internet (IP)
		unsigned char         sin_zero[8]; // Relleno para preservar la estructura

	}

	struct in_addr{
	
		unsigned long		  s_addr; // Direccion IP

	}

	*/

	server_addr.sin_family = AF_INET; // Elijo la familia de direcciones IPv4 mediante AF_INET
	my_port = atoi(argv[1]); // Convierto el puerto pasado por argumento de main, que es un string, a una variable short
	server_addr.sin_port = htons(my_port); // Lo asigno a la estructura, pero antes lo converto a ordenacion de bytes a la red
	server_addr.sin_addr.s_addr = INADDR_ANY; //Si lo igualo a INADDR_ANY toma la direccion 0.0.0.0, que significa que toma cualquier direccion
	memset(&(server_addr.sin_zero),'\0',8); // Lleno el resto de la estructura con /0	

	bind_to_port = bind(sockfd, (struct sockaddr*) &server_addr, sizeof(server_addr)); // A bind le tengo que pasar el descriptor de socket, la direccion de la estructura server casteada y el tamano de esa estructura

	if(bind_to_port<0){

		perror("\nError al enlazar el socket al puerto.\n");
		return;

	}	

	// Una vez creado el socket, y luego que sea enlazado correctamente al puerto asignado, se procede a escuchar mediante ese puerto, esperando conexiones entrantes.

	listen_var = listen(sockfd, BACKLOG_LISTEN); // A la funcion le debo pasar el descriptor del socket, y el numero de conexiones permitidas en la cola de entrada

	if(listen_var<0){

		perror("Error al escuchar mediante el puerto.");
		return;

	}

	printf("\nEsperando conexiones entrantes...\n");

	while(status){

		tam_client = sizeof(client_addr);

		newsockfd = accept(sockfd, (struct sockaddr*) &client_addr, &tam_client);

		if(newsockfd < 0){

			perror("\nError al aceptar la conexion del cliente.\n");
			status = 0;

		}

		printf("\nserver:  conexion desde:  %s\n", inet_ntoa(client_addr.sin_addr));

		if(fork()==0){

			printf("\nConexion atendida por proceso PID: %d\n", getpid());

			memset(buffer,'\0',256);

			n = read(newsockfd, buffer, 256);

			printf("\nCliente: %s\n", buffer);

			memset((void*)buffer,'\0',256);

			printf("Ingrese el mensaje para enviar al cliente: ");

			fgets((void*)buffer,256,stdin);

			n = write(newsockfd, buffer, 256);

			close(newsockfd);

			exit(0);

		}

	}

}


