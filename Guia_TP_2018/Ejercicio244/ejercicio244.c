/**
*
*  Infomática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos: 	Albanesi, Tomas Agustin
						Gonzalez Perez, Jose
						Mella, Camila
						Alvarez, Gerson
						Magallanes, Claudio	
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.4.4 - Ejercicio 4
*  Enunciado del ejercicio: Repetir el programa utilizando la otra sentencia de iteración (for si utilizaste while o visceversa).
*  Observaciones: gcc -o ejercicio244 ejercicio244.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.4.4 - \n");

	int numeroini, numerofin, i;
	int sumatoria=0;

	printf("Ingrese el numero inicial de la sumatoria: ");
	scanf("%d",&numeroini);
	printf("\nIngrese el numero final de la sumatoria: ");
	scanf("%d",&numerofin);

    if(numeroini<numerofin){

	    while(numeroini<=numerofin){

		    sumatoria=numeroini+sumatoria;
		    numeroini++;

	    }


	printf("\nLa sumatoria entre los dos numeros elegidos es: %d",sumatoria);
    
    }else{

        perror("\nERROR: El numero inicial de la sumatoria no puede ser menor o igual que el numero final de la sumatoria");

    }

	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

}
