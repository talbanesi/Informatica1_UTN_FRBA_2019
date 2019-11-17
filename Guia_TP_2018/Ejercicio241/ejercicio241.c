/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.4.1 - Ejercicio 1
*  Enunciado del ejercicio: Escribir un programa que realice la sumatoria de los números consecutivos entre dos valores enteros ingresa-
dos por teclado (ambos extremos se incluyen en la sumatoria. Se debe aceptar números enteros signados.
*  Observaciones: gcc -o ejercicio241 ejercicio241.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.4.1 - \n");
	
	printf("\nDescripcion: Escribir un programa que realice la sumatoria de los números consecutivos entre dos valores enteros ingresados por teclado (ambos extremos se incluyen en la sumatoria. Se debe aceptar números enteros signados.\n\n");

	int numeroini, numerofin, i;
	int sumatoria=0;

	printf("Ingrese el numero inicial de la sumatoria: ");
	scanf("%d",&numeroini);
	printf("\nIngrese el numero final de la sumatoria: ");
	scanf("%d",&numerofin);

	for(i=numeroini; i<=numerofin; i++){

		sumatoria=sumatoria+i;

	}

	printf("\nnLa sumatoria entre los dos numeros elegidos es: %d",sumatoria);

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

}
