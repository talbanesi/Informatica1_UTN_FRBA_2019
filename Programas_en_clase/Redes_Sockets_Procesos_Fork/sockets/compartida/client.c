#include "sock-lib.h"

#define MAXDATASIZE 4096/* m�xima cantidad de bytes que puede recibir en una transacci�n*/

int main(int argc, char * argv[])
{
	int sockfd;  /*File Descriptor para sockets*/
	int numbytes;/*Contendr� el n�mero de bytes recibidos por read () */
	char buf[MAXDATASIZE];  /* Buffer donde se reciben los datos de read ()*/

/* Tratamiento de la l�nea de comandos. */
	if (argc < 2)
	{
		fprintf(stderr,"uso: %s hostname [port]\n",argv [0]);
		exit(1);
        }

	sockfd = conectar (argc, argv);

/* Recibimos los datos del servidor */
	if ((numbytes = read (sockfd, buf, MAXDATASIZE)) == -1)
	{
		perror("error de lectura en el socket");
		exit(1);
	}

/* Visualizamos lo recibido */
	buf[numbytes] = '\0';
	printf("Recibido: %s\n",buf);

/* Devolvemos recursos al sistema */
	close(sockfd);
	return 0;
}