/*
 * A simple client of server.c
 * From - http://www.linuxhowtos.org/C_C++/socket.htm
 * GCC: gcc -o client sockets_2client.c
 * Ej. Uso: ./client 127.0.0.1 8888
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h> 

void error(const char *msg)
{
    perror(msg);
    exit(0);
}

int main(int argc, char *argv[])
{
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    FILE *archivo;

    char buffer[1024];
    if (argc < 3) {
       fprintf(stderr,"usage %s hostname port\n", argv[0]);
       exit(0);
    }

    portno = atoi(argv[2]);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) 
        error("ERROR opening socket");

    server = gethostbyname(argv[1]);

    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host\n");
        exit(0);
    }

    memset((void *) &serv_addr, '\0', sizeof(serv_addr));

    serv_addr.sin_family = AF_INET;

    bcopy((char *)server->h_addr, 
         (char *)&serv_addr.sin_addr.s_addr,
         server->h_length);

    serv_addr.sin_port = htons(portno);

    if (connect(sockfd,(struct sockaddr *) &serv_addr,sizeof(serv_addr)) < 0) 
        error("ERROR connecting");

    printf("Escriba su mensaje: ");

    memset((void *) buffer, '\0', 1024);
    fgets(buffer,1024,stdin);
    n = write(sockfd,buffer,strlen(buffer));

    if (n < 0) 
         error("ERROR writing to socket");

    archivo = fopen("archivo.txt","w+");

    do{

	    memset((void *) buffer, '\0', 1024);

	    n = read(sockfd,buffer,1024);

	    if (n < 0) 
	         error("ERROR reading from socket");

	    fputs(buffer,archivo);

	    //printf("%s\n",buffer);

    }while(n>0);

    close(sockfd);

    return 0;
}