#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h> //Funciones ordenamiento de bytes
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>

void main(int argc, char **argv){

	int sockfd;

	int my_port;

	int n;

	struct sockaddr_in server_addr; // Contendra la informacion del servidor con connect()

	struct sockaddr_in client_addr; // Contendra la informacion del cliente con bind()

	struct hostent *servidor; // Estructura para usar con gethostbyname()

	if(argc<3){

		perror("\nError. Debe ingresar mas argumentos.\n");
		return;

	}

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	if(sockfd<0){

		perror()

	}






}