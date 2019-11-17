#include <stdio.h>
#include "libprimeraMayus.h"

int main(void){
	
	char cadena[100];
	
	printf("Ingrese una cadena de texto: ");
	fgets(cadena,100,stdin);
	
	printf("\n%s\n",cadena);
		
	primeraMayus(cadena);
	
	printf("%s\n",cadena);
	
}
