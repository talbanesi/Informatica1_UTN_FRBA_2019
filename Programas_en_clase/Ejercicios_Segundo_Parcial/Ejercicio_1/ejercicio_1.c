#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){

	char buffer[12];
	char *pbuf;
	int num_linea;

	FILE *archivo;

	archivo = fopen("config.txt","r+");

	fgets(buffer, 10, archivo);



	pbuf = buffer+5;

	printf("\n%s\n",(buffer+5));

}

struct config_struct{

	int port;
	int backLog;
	char archStr[3][11];

};

config_struct load_conf(char *str_arch_conf){

	FILE *arch_conf;
	char buffer[64];
	char *pbuf;

	arch_conf = fopen(str_arch_conf,"r");

	if(arch_conf = NULL){

		perror("\nSe ha producido un error al abrir el archivo de configuracion\n");
		return;

	}





}

