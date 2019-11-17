#include <string.h>

int primeraMayus(char *string1){
	
	if((string1[0] >= 'a') && (string1[0] <= 'z')){
		
		string1[0] = string1[0] - ('a' - 'A');
		
	}
	
	return 0;
	
}

int Mayusculizar(char *string2, int TAM2){

	int i;

	for(i=0;i<TAM2;i++){

		if((string2[i] >= 'a') && (string2[0] <= 'z')){

			string2[i] = string2[i] - 32;

		}

	}
	
	return 0;
	
}

int FormarNyA(char *nombre, char *apellido, char *nombreCompleto){

	int TAMN = strlen(nombre);
	int TAMA = strlen(apellido);
	char *string_coma = ", ";
	int TAMC;

	int i;

	for(i=0;i<TAMA;i++){

		if((apellido[i] >= 'a') && (apellido[0] <= 'z')){

			apellido[i] = apellido[i] - 32;

		}

	}

	if((nombre[0] >= 'a') && (nombre[0] <= 'z')){
		
		nombre[0] = nombre[0] - ('a' - 'A');
		
	}

	strcpy(nombreCompleto, apellido);
	strcat(nombreCompleto, string_coma);
	strcat(nombreCompleto, nombre);

	TAMC = strlen(nombreCompleto);

	return TAMC;
	
}