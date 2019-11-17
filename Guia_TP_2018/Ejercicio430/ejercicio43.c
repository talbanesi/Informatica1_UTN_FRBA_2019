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
*  Nº de ejercicio: 4.3 - Ejercicio 3
*  Enunciado del ejercicio: Tomar el Ejercicio 3.1.3 de la sección 3.1. Ejercicios sencillos y reescribirlo pasando los argumentos por
referencia.
*  Observaciones: gcc -o ejercicio43 ejercicio43.c lib43.c
*
**/

#include <stdio.h>
#include "lib43.h" 

int main (void){
    
    int num, num2, resultado, factorial; 
    num2=0; 
    resultado=1; 
    
    printf("Ingrese un número: "); 
    scanf("%d", &num); 
    
    factorial=factorial_func(&num, &num2, &resultado); 
     
    printf("Su factorial es: %d\n", factorial); 
    
}
