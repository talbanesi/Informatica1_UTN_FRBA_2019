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
*  Nº de ejercicio: 3.1.2 - Ejercicio 2
*  Enunciado del ejercicio: Escribir una función que reciba un valor de temperatura en precisión simple, la escala de dicho valor y la
escala de temperaturas de destino, y realice la conversión del valor.
Se valorará especialmente no utilizar variables en el cálculo, es decir, trabajar solo con los argumentos
recibidos.
*  Observaciones: gcc -o ejercicio312 ejercicio312.c lib312.c
*
**/


#include <stdio.h>
#include "lib312.h"

int main(void){

    float temp_valor;
    int unidad_temp_origen;
    int unidad_temp_destino;
    float temp;

    printf("\n - GUIA TP 2018 - EJERCICIO 3.1.2 - \n");

    printf("\nIngrese el valor de la temperatura: ");
    scanf("%f",&temp_valor);
    printf("\nPara ingresar las opciones de unidades de temperatura utilice los siguientes codigos:");
    printf("\n\n1 --> Fahrenheit\n");
    printf("\n2 --> Celsius\n");
    printf("\n3 --> Kelvin\n");
    printf("\n4 --> Rankine\n");
    printf("\nIngrese la opcion correspondiente a la unidad de temperatura de origen: ");
    scanf("%d",&unidad_temp_origen);
    printf("\nIngrese la opcion correspondiente a la unidad de temperatura de destino: ");
    scanf("%d",&unidad_temp_destino);

    temp = conversion_temp(temp_valor,unidad_temp_origen,unidad_temp_destino);

    if(unidad_temp_origen==1 && unidad_temp_destino==2){
        printf("\nLa temperatura %f Fahrenheit es igual a %f Celsius",temp_valor,temp);
    }else if(unidad_temp_origen==2 && unidad_temp_destino==1){
        printf("\nLa temperatura %f Celsius es igual a %f Fahrenheit",temp_valor,temp);
    }else if(unidad_temp_origen==1 && unidad_temp_destino==3){
        printf("\nLa temperatura %f Fahrenheit es igual a %f Kelvin",temp_valor,temp);
    }else if(unidad_temp_origen==3 && unidad_temp_destino==1){
        printf("\nLa temperatura %f Kelvin es igual a %f Fahrenheit",temp_valor,temp);
    }else if(unidad_temp_origen==1 && unidad_temp_destino==4){
        printf("\nLa temperatura %f Fahrenheit es igual a %f Rankine",temp_valor,temp);
    }else if(unidad_temp_origen==4 && unidad_temp_destino==1){
        printf("\nLa temperatura %f Rankine es igual a %f Fahrenheit",temp_valor,temp);
    }else if(unidad_temp_origen==2 && unidad_temp_destino==3){
        printf("\nLa temperatura %f Celsius es igual a %f Kelvin",temp_valor,temp);
    }else if(unidad_temp_origen==3 && unidad_temp_destino==2){
        printf("\nLa temperatura %f Kelvin es igual a %f Celsius",temp_valor,temp);
    }else if(unidad_temp_origen==2 && unidad_temp_destino==4){
        printf("\nLa temperatura %f Celsius es igual a %f Rankine",temp_valor,temp);
    }else if(unidad_temp_origen==4 && unidad_temp_destino==2){
        printf("\nLa temperatura %f Rankine es igual a %f Celsius",temp_valor,temp);
    }else if(unidad_temp_origen==3 && unidad_temp_destino==4){
        printf("\nLa temperatura %f Kelvin es igual a %f Rankine",temp_valor,temp);
    }else if(unidad_temp_origen==4 && unidad_temp_destino==3){
        printf("\nLa temperatura %f Rankine es igual a %f Kelvin",temp_valor,temp);
    }else{
        printf("\nError de conversion");
    }

	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

    return 0;

}