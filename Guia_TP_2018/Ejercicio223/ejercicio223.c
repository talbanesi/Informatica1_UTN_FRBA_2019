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
*  Nº de ejercicio: 2.2.3 - Ejercicio 3
*  Enunciado del ejercicio: Mejorar el programa anterior para que el mensaje de error salga por la salida de error estándar y el resultado
por la salida estándar.
*  Observaciones: gcc -o ejercicio223 ejercicio223.c
*
**/

#include<stdio.h>

int main(void){

	float lado1,lado2,lado3; //Se declaran las variables float de los tres lados
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.2.3 - \n");

	printf("Ingrese el primer lado del triangulo: "); //Se ingresa el primer lado
	scanf("%f",&lado1);
	printf("Ingrese el segundo lado del triangulo: "); //Se ingresa el segundo lado
	scanf("%f",&lado2);
	printf("Ingrese el tercer lado del triangulo: "); //Se ingresa el tercer lado
	scanf("%f",&lado3);

	if(lado1>0 && lado2>0 && lado3>0){

		if(lado1==lado2){

			if(lado2==lado3){

				printf("\nEl triangulo es equilatero."); //Si los tres lados son iguales, el triangulo es equilatero

			}else if(lado2!=lado3){

				printf("\nEl triangulo es isoceles."); //Si solo dos lados son iguales, el triangulo es isoceles
		
			}

		}else if(lado2!=lado3){
			
			printf("\nEl triangulo es escaleno."); //Si ninguno de los lados son iguales, el triangulo es escaleno

		}else{

			printf("\nEl triangulo es isoceles.");

		}

	}else if(lado1<=0 || lado2<=0 || lado3<=0)perror("\nERROR: Carece de sentido que el lado sea negativo o nulo"); //Si cualquiera de los lados es menor o igual a cero, se muestra por pantalla un mensaje de error.
	
	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

	return 0;	
	
}
