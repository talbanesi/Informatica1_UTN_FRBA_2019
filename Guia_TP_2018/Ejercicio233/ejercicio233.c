/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.3.3 - Ejercicio 7
*  Enunciado del ejercicio: Modificar el programa anterior para que en lugar de aceptar números acepte las letras L, M, X, J, V, S y D
(en mayúscula) indicando, Lunes, Martes, Miércoles, etc. respectivamente.
*  Observaciones: gcc -o ejercicio233 ejercicio233.c
*
**/

#include<stdio.h>

int main(void){

	char letra;

    printf("\n - GUIA TP 2018 - EJERCICIO 2.3.3 - \n");
	
	printf("\nDescripcion: Modificar el programa anterior para que en lugar de aceptar números acepte las letras L, M, X, J, V, S (en mayúscula) indicando, Lunes, Martes, Miércoles, etc. respectivamente.\n\n");

	printf("Ingrese la letra: ");
	scanf("%c",&letra);
    
    if(letra == 'L')printf("\nEl dia es Lunes");
    else if(letra == 'M')printf("\nEl dia es Martes");
    else if(letra == 'X')printf("\nEl dia es Miercoles");
    else if(letra == 'J')printf("\nEl dia es Jueves");
    else if(letra == 'V')printf("\nEl dia es Viernes");
    else if(letra == 'S')printf("\nEl dia es Sabado");
    else if(letra == 'D')printf("\nEl dia es Domingo");
    else{
        
        printf("\nERROR: Las letras ingresadas solo tienen que ser L, M, X, J, V, S, D");

    }

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	
	
}
