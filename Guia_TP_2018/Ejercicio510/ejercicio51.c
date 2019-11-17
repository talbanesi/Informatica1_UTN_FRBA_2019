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
*  Nº de ejercicio: 5.1 - Ejercicio 1
*  Enunciado del ejercicio: Escribir un programa que defina un arreglo de 1024 enteros, le pase su referencia a una función que lo
complete con números aleatorios, desde 0 a RAND_MAX (es decir el número aleatorio completo). La función
recibirá dos argumentos: el puntero al inicio del arreglo y la cantidad de elementos del mismo. A la vuelta de la función de inicialización del arreglo el programa presentará por pantalla los valores del arreglo a razón de
11 lugares de caracteres por cada valor. La función regresa la cantidad de elementos del arreglo efectivamente
inicializados.
*  Observaciones: gcc -o ejercicio51 ejercicio51.c funciones.c
*
**/

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define L 1023

int main(void){

	int arreglo[L];
	int i,j,contador=0;;

	printf("\n - GUIA TP 2018 - EJERCICIO 5.1 - \n\n");

	contador = completar_arreglo(arreglo, L);

	printf("\n\n");

	for(i=0;i<=L;i++){

		fprintf(stdout, "%d",arreglo[i]);
		fprintf(stdout,"           ");

	}

	printf("\n\nLos elementos correctamente inicializados son: %d\n",contador);
	printf("\n");

	return 0;

}