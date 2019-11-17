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
*  Nº de ejercicio: 2.1.3 - Ejercicio 3
*  Enunciado del ejercicio: Mejorar el programa anterior para que el mensaje de error salga por la salida de error estándar y el resultado
por la salida estándar. Pista: man perror
*  Observaciones: gcc -o ejercicio213 ejercicio213.c -lm
*
**/

#include<stdio.h>
#include<math.h>

#define PI 3.1415

int main(void){

	int radio;
	float superficie;
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.1.3 - \n\n");

	printf("Ingrese el radio del circulo: ");
	scanf("%d",&radio); //Se ingresa el radio del circulo

	if(radio<=0){ //Si el radio es negativo o nulo, se muestra un error por pantalla, el cual se envia a traves de la salida de error estandar.
	
		perror("\n\nERROR: Carece de sentido que el radio sea negativo o nulo. Por favor ingrese un radio positivo.");

	}else{ //Si no sucede lo anterior, calcula la superficie del circulo

	superficie = PI * pow(radio,2); //Calculo de la superficie del circulo

	printf("\nLa superficie del circulo es: %f",superficie); //Se muestra por pantalla la superficie del circulo.

	}
	
	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

	return 0;	
	
}
