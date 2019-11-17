/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.5.3 - Ejercicio 3
*  Enunciado del ejercicio: Realizar un programa que solicite un número entero y calcule su factorial. En el caso de ingresar 0 mostrar
su factorial y salir del programa.
*  Observaciones: gcc -o ejercicio253 ejercicio253.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.5.3 - \n");
	
	printf("\nDescripcion: Realizar un programa que solicite un número entero y calcule su factorial. En el caso de ingresar 0 mostrar su factorial y salir del programa.\n\n");

	int numero, factorial = 1, i;

	printf("\nIngrese un numero para calcular su factorial: ");
	scanf("%d",&numero);

	for(i=numero;i>1;i--){

		factorial=factorial*i;

	}

	printf("\nEl factorial de %d! es: %d\n", numero,  factorial);

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

}
