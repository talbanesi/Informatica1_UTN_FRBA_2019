/**
*
*  Infomática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos:  Albanesi, Tomas Agustin
                        Gonzalez Perez, Jose
                        Mella, Camila
                        Alvarez, Gerson
                        Magallanes, Claudio 
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 5.2 - Ejercicio 2
*  Enunciado del ejercicio: Agregar al archivo funciones.c una función que reciba los mismos argumentos que la del ítem anterior,
es decir, el puntero al inicio del arreglo, y la cantidad de elementos del mismo, calcule su promedio y lo
regresa como valor de retorno.
*  Observaciones: gcc -o ejercicio52 ejercicio52.c funciones.c
*
**/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define L 1

int main(void){

	int arreglo[L];
	int i,j,contador=0;
	float promedio_arreglo;

	printf("\n - GUIA TP 2018 - EJERCICIO 5.2 - \n\n");

	contador = completar_arreglo(arreglo, L);

	printf("\n\n");

	for(i=0;i<=L;i++){

		fprintf(stdout, "%d",arreglo[i]);
		fprintf(stdout,"           ");

	}

	printf("\n\n --> Los elementos correctamente inicializados son: %d\n",contador);

	promedio_arreglo = arreglo_prom(arreglo, L);

	printf("\n --> El promedio del arreglo es: %f\n",promedio_arreglo);

	printf("\n");

	return 0;

}