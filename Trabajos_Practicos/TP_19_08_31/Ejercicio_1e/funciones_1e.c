/**
*
*  Informática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos:  Albanesi, Tomas Agustin
                        Mella, Camila
                        Gonzalez Perez, Jose
                        Alvarez, Gerson
                        Magallanes, Claudio
*  Descripcion:
*  Formato de llamada:
*  Argumentos:
*  Retorno:
*  Observaciones:
*
**/

#include <stdio.h>
#include "funciones_1e.h"
#include <ctype.h>

int PasarAMinus(char *linea, int TAM3){

	int i;

	for(i=0;i<TAM3;i++){

		if((linea[i] >= 'A') && (linea[i] <= 'Z')){

			linea[i] = linea[i] + ('a'- 'A');

		}

	}

	return 0;

}

int CuentaLetras(char *linea, int TAM3){

	int cant_letras = 0;

	for(int j=0;j<TAM3;j++){

			if(isalpha(linea[j])){

				cant_letras++;

			}

	}

	return cant_letras;

}

void squeeze(char *linea, char c){

	unsigned int i, j;
	for(i = j = 0; linea[i] != '\0'; i++)
	if(linea[i] != c)
		linea[j++] = linea[i];
	linea[j] = '\0';

}
