/*
 * A simple server in the internet domain using TCP
 * The port number is passed as an argument
 * Version Original de - http://www.linuxhowtos.org/C_C++/socket.htm
 * GCC: gcc -o server sockets_1server.c
 * Ej. Uso: ./server 8888 archivo.txt
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

#define MD5_HASH_SIZE 16

void error(const char *msg)
{
    printf("%s\n",msg);
    exit(1);
}

int main(int argc, char *argv[]){

    int sockfd, newsockfd, portno;
    socklen_t clilen;
    char buffer[1024];
    struct sockaddr_in serv_addr, cli_addr;
    int n;
    char *buffer1;
    char nombre_archivo[50];
    int tam;

    buffer1 = (char*) malloc(sizeof(char)*1024);

    FILE *archivo;

    if (argc < 2) {
        fprintf(stderr,"ERROR, no port provided\n");
        exit(1);
    }

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0) 
        error("ERROR opening socket");

    // Armando la estructura "sockaddr_in"
    portno = atoi(argv[1]);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);
    memset((void *) &(serv_addr.sin_zero), '\0', 8); // Poner a cero el resto de la estructura

    if (bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
        error("ERROR on binding");

    listen(sockfd,5);

    clilen = sizeof(cli_addr);

    printf("Esperando conexiones...\n");
    // Llamado bloqueante a accept()
    newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
    printf("Conexion aceptada!\n");

    if (newsockfd < 0) 
        error("ERROR on accept");

    memset((void *) buffer, '\0', 256);
    archivo = fopen(argv[2],"r");

    fseek (archivo , 0 , SEEK_END);
    tam = ftell (archivo);
    rewind (archivo);

    strcpy(nombre_archivo,argv[2]);

    int n;
    MD5_CTX c;
    char buf[512];
    size_t bytes;
    unsigned char out[MD5_HASH_SIZE];

    MD5_Init(&c);
    bytes=read(STDIN_FILENO, buf, 512);
    while(bytes > 0){
        MD5_Update(&c, buf, bytes);
        bytes=read(STDIN_FILENO, buf, 512);
    }

    MD5_Final(out, &c);

    //for(n=0; n<MD5_DIGEST_LENGTH; n++)
        //printf("%02x", out[n]);

    //printf("\n");

    n = sendto(sock, nombre_archivo, sizeof(nombre_archivo), 0, &server, length);

    n = read(newsockfd,buffer,1024);

    if (n < 0) error("ERROR reading from socket");

    printf("Este es su mensaje: %s\n",buffer);


    while(fgets(buffer1,1024,archivo)){

        printf("\n\nLinea leida\n\n");

        n = write(newsockfd,buffer1,1024);

        if (n < 0) error("ERROR writing to socket");

    }

    close(newsockfd);

    close(sockfd);

    return 0; 

}