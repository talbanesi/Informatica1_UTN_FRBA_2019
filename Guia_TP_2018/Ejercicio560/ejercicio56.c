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
*  Nº de ejercicio: 5.6 - Ejercicio 6
*  Enunciado del ejercicio: Sin utilizar ninguna función definida en string.h, implementar una función llamada my_strcat que
recibe como argumentos dos punteros a cadenas de datos, y copia el segundo a continuación del primero.
El caracter ’\0’ de la primer cadena desaparece siendo reemplazado por el primer caracter de la segunda
cadena, y se conserva el finalizar ’\0’ de la segunda cadena como finalizador de la cadena resultado. La
función retornará un valor entero equivalente a la cantidad de bytes de la cadena resultante.
*  Observaciones: gcc -o ejercicio56 ejercicio56.c funciones.c
*
**/

#include <stdio.h>
#include <stdlib.h>
#include "lib56.h"

#define L 200

int main(void){

	char str1[L];
	char str2[L];
	int tam_memoria;
	int tam3;

	printf("\n - GUIA TP 2018 - EJERCICIO 5.6 - \n\n");

	printf("Ingrese la primera cadena de texto: ");
	scanf("%[^\n]s",str1);

	setbuf(stdin,NULL);

	printf("\nIngrese la segunda cadena de texto: ");
	scanf("%[^\n]s",str2);

	tam3 = my_strcat(str1,str2);

	tam_memoria = tam3 + 1;

	printf(" --> La longitud que ocupa el string en memoria es de: %d bytes\n",tam_memoria);

	printf("\n");

	return 0;

}