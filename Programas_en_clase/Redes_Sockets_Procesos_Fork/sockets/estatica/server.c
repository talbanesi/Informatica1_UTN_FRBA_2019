#include "sock-lib.h"

int main ()
{
	int sockfd;			/* File Descriptor del socket por el que el
					servidor "escuchará" conexiones*/
	char message[50];
	struct sockaddr_in my_addr;	/* contendrá la dirección IP y el número de
					puerto local */
	int sockdup,flag=1;
	
	fd_set readfds;
	
	FD_ZERO(&readfds);
	
	

	if ((sockfd = Open_conection (&my_addr)) == -1)
	{
		perror ("Falló la creación de la conexión"); 
		exit (1);
	}
	
	printf("Servidor escuchando\n");

	while(flag)
	{
	  FD_SET(STDIN, &readfds);
	  FD_SET(sockfd, &readfds);
		
	  if (select(sockfd+1, &readfds, NULL, NULL, NULL) == -1) 
		{
		  perror("select");
		  exit(1);
		}
		
		
		if (FD_ISSET(STDIN, &readfds))
		  //exit(0);
			flag=0;
		if (FD_ISSET(sockfd, &readfds))
		{
		sockdup = Aceptar_pedidos (sockfd);
		
        printf("Ingrese un mensaje S: ");
        scanf("%s",message);
        
		if (write (sockdup, message , sizeof (message)) == -1)
		{
			perror("Error escribiendo mensaje en socket");
			exit (1);
		}
		close(sockdup);
		}
	}
	
	close(sockfd);
	return 0;
}
