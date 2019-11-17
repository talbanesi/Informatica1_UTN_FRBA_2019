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
#include "funciones_1c.h"

int PasarAMinus(char *linea, int TAM3){

	int i;

	for(i=0;i<TAM3;i++){

		if((linea[i] >= 'A') && (linea[i] <= 'Z')){

			linea[i] = linea[i] + ('a'- 'A');

		}

	}

	return 0;

}
