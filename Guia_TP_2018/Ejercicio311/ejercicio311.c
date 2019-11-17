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
*  Nº de ejercicio: 3.1.1 - Ejercicio 1
*  Enunciado del ejercicio: Re escribir el cálculo de la superficie del círculo utilizando para este cálculo una función llamada circle () la
cual devuelve en un float el resultado.
*  Observaciones: gcc -o ejercicio311 ejercicio311.c lib311.c
*
**/

#include <stdio.h>
#include "lib311.h"

void main(void){

    printf("\n - GUIA TP 2018 - EJERCICIO 3.1.2 - \n");

    float area, r;

    printf("Inserte el radio: \n");
    scanf("%f",&r);
    area = circle(r);
    printf("area de circulo de radio %f = %f\n", r, area);

}
