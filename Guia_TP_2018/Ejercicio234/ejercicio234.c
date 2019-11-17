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
*  Nº de ejercicio: 2.3.4 - Ejercicio 8
*  Enunciado del ejercicio: Modificar el programa anterior para que acepte las letras en mayúscula y minúscula.
*  Observaciones: gcc -o ejercicio234 ejercicio234.c
*
**/

#include<stdio.h>

int main(void){

	char letra;

    printf("\n - GUIA TP 2018 - EJERCICIO 2.3.4 - \n\n");

	printf("Ingrese la letra: ");
	scanf("%c",&letra);
    
    if(letra == 'L' || letra == 'l')printf("\nEl dia es Lunes");
    else if(letra == 'M' || letra == 'm')printf("\nEl dia es Martes");
    else if(letra == 'X' || letra == 'x')printf("\nEl dia es Miercoles");
    else if(letra == 'J' || letra == 'j')printf("\nEl dia es Jueves");
    else if(letra == 'V' || letra == 'v')printf("\nEl dia es Viernes");
    else if(letra == 'S' || letra == 's')printf("\nEl dia es Sabado");
    else if(letra == 'D' || letra == 'd')printf("\nEl dia es Domingo");
    else{
        
        printf("\nERROR: Las letras ingresadas solo tienen que ser L, l, M, m, X, x, J, j, V, v, S, s, D, d");

    }

    printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
    printf("              - GONZALEZ PEREZ, JOSE\n");
    printf("              - MELLA, CAMILA\n");
    printf("              - ALVAREZ, GERSON\n");
    printf("              - MAGALLANES, CLAUDIO\n\n");

	return 0;	
	
}
