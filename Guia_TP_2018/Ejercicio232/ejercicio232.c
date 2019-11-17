/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.3.2 - Ejercicio 6
*  Enunciado del ejercicio: Realizar un programa que solicite el ingreso de un número entero del 1 al 7 y en función del número ingresado, informe el día de la semana siendo 1 el Domingo, 2 el Lunes y así sucesivamente. Si el número es mayor a 7
deberá enviar un mensaje de error.
*  Observaciones: gcc -o ejercicio232 ejercicio232.c
*
**/

#include<stdio.h>

int main(void){

	int numero;
    
    printf("\n - GUIA TP 2018 - EJERCICIO 2.3.2 - \n");
	
	printf("\nDescripcion: Realizar un programa que solicite el ingreso de un número entero del 1 al 7 y en función del número ingresado, informe el día de la semana siendo 1 el Domingo, 2 el Lunes y así sucesivamente. Si el número es mayor a 7 deberá enviar un mensaje de error.\n\n");

	printf("Ingrese el numero: ");
	scanf("%d",&numero);


    switch(numero){
        
        case 1: 
            
            printf("\nEl dia de la semana es DOMINGO\n");
            break;
        
        case 2: 
            
            printf("\nEl dia de la semana es LUNES\n");
            break;

        case 3: 
            
            printf("\nEl dia de la semana es MARTES\n");
            break;
            
        case 4: 
            
            printf("\nEl dia de la semana es MIERCOLES\n");
            break;
            
        case 5: 
            
            printf("\nEl dia de la semana es JUEVES\n");
            break;
            
        case 6: 
            
            printf("\nEl dia de la semana es VIERNES\n");
            break;
            
        case 7: 
            
            printf("\nEl dia de la semana es SABADO\n");
            break;
            
        default:    
            
            printf("\nERROR: El numero tiene que estar entre 1 y 7.\n");
            
        
    }
	
	printf("\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	
	
}
