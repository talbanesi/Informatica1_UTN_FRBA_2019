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
*  Nº de ejercicio: 5.5 - Ejercicio 5
*  Enunciado del ejercicio: Escribir una función denominada my_strlen que recibe como argumento un puntero a una cadena de
caracteres ASCIIZ (ASCII Zero ended, es decir una secuencia de caracteres de texto finalizada en ’\0’), y
retorne un valor entero con la cantidad de caracteres contenidos en la cadena. El caracter terminador no se
incluye en la cuenta.
Condición: No utilizar ninguna función auxiliar definida en el encabezamiento string.h.
*  Observaciones: gcc -o ejercicio55 ejercicio55.c funciones.c
*
**/

#include<stdio.h>
#include "lib55.h"

int main(void){

    int cant;
    int i;

    int cant_caracteres=0;

    char string[100];

    printf("\n - GUIA TP 2018 - EJERCICIO 5.5 - \n\n");

    printf("\nIngrese una cadena de caracteres: ");
    scanf("%[^\n]s",string);

    cant = my_strlen(string);

    printf("\nLa cantidad de caracteres es: %d\n\n",cant);

    return 0;

}

