/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.4.2 - Ejercicio 2
*  Enunciado del ejercicio: Mejorar el programa anterior verificando que se el primer valor sea menor al segundo de modo de no incurrir
en resultados incorrectos.
*  Observaciones: gcc -o ejercicio242 ejercicio242.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.4.2 - \n");
	
	printf("\nDescripcion: Mejorar el programa anterior verificando que se el primer valor sea menor al segundo de modo de no incurrir en resultados incorrectos.\n\n");

	int numeroini, numerofin, i;
	int sumatoria=0;

	printf("Ingrese el numero inicial de la sumatoria: ");
	scanf("%d",&numeroini);
	printf("\nIngrese el numero final de la sumatoria: ");
	scanf("%d",&numerofin);

    if(numeroini<numerofin){

	    for(i=numeroini; i<=numerofin; i++){

		    sumatoria=sumatoria+i;

	    }


	printf("\nLa sumatoria entre los dos numeros elegidos es: %d",sumatoria);
    
    }else{

        printf("\nERROR: El numero inicial de la sumatoria no puede ser menor o igual que el numero final de la sumatoria");

    }

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

}
