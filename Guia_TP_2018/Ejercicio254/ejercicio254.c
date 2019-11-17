/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.5.4 - Ejercicio 4
*  Enunciado del ejercicio: Mejorar el ejercicio anterior validando que la entrada que no sea negativa. En ese caso deberá presentar un
mensaje de error y solicitar un nuevo valor.
*  Observaciones: gcc -o ejercicio254 ejercicio254.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.5.4 - \n");
	
	printf("\nDescripcion: Mejorar el ejercicio anterior validando que la entrada que no sea negativa. En ese caso deberá presentar un mensaje de error y solicitar un nuevo valor.\n");

	int numero, factorial = 1, i;

	do{
		printf("\nIngrese un numero para calcular su factorial: ");
		scanf("%d",&numero);
		if(numero<0){
			printf("\nERROR: El numero no puede ser negativo. Ingrese un nuevo valor por favor.\n");
		}
	}while(numero<0);

	for(i=numero;i>1;i--){

		factorial=factorial*i;

	}

	printf("\nEl factorial de %d! es: %d\n", numero,  factorial);

	printf("\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

}
