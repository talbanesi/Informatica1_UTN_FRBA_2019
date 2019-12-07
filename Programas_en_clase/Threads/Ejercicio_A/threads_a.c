#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <pthread.h>

pthread_t tid[2];

(void*) (*funcion) ((void*)argv){

	FILE *archivo1;

	FILE *archivo1cpymay;

	int len1;

	char *token;

	char buffer[300];

	printf("\nEstoy dentro del thread\n");

	archivo1 = fopen(argv,"r");

	while(fgets(buffer, 300, archivo1)!=0){

		for(i=0;i<300;i++){

			buffer[i] = toupper(buffer[i]);

		}

	}

	token = strchr(argv,".");
	token = '\0';

	



}

int main(int argv, char **argv){

	int err;
	int i;

	if(argc<2){

		perror("\nCANTIDAD DE ARGUMENTOS\n");
		return -1;

	}

	for(i=0;i<3;i++){

		err = pthread_create(&tid[i],NULL,(void*)(*funcion)(void*),(void*) argv[i+1]);

		if(err != 0){

			perror("\nTHREAD\n");
			return -1;

		}
		
	}

	for(i=0;i<3;i++){

		pthread_join(tid[i],NULL);

		printf("\nTID: %d\n",(int tid[i]));
		
	}

	return 0;









}