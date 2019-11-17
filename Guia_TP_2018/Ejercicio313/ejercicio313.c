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
*  Nº de ejercicio: 3.1.3 - Ejercicio 3
*  Enunciado del ejercicio: Escribir una función que reciba un número entero positivo y calcule su factorial, retornándolo en un tipo long.
*  Observaciones: gcc -o ejercicio313 ejercicio313.c lib313.c
*
**/

#include <stdio.h>
#include "lib313.h" 

int main (void){
    
    int num, num2, resultado, factorial; 
    num2=0; 
    resultado=1; 
    
    printf("Ingrese un número: "); 
    scanf("%d", &num); 
    
    factorial=factorial_func(num, num2, resultado); 
     
    printf("Su factorial es: %d\n", factorial); 
    
}
