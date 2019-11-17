/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.4.3 - Ejercicio 3
*  Enunciado del ejercicio: Mejorar el programa anterior para que el mensaje de error salga por la salida de error estándar y el resultado
por la salida estándar.
*  Observaciones: gcc -o ejercicio243 ejercicio243.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.4.3 - \n");
	
	printf("\nDescripcion: Mejorar el programa anterior para que el mensaje de error salga por la salida de error estándar y el resultado por la salida estándar..\n\n");

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

        perror("\nERROR: El numero inicial de la sumatoria no puede ser menor o igual que el numero final de la sumatoria");

    }

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

}
