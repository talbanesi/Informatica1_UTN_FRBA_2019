/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.3.0 - Ejercicio 4
*  Enunciado del ejercicio: Modificar el programa anterior para comprobar que los números ingresados conformen realmente un trián-
gulo. En caso de no conformarlo no procederá a la clasificación, presentando en su lugar un mensaje de error
y terminando la ejecución.
*  Observaciones: gcc -o ejercicio230 ejercicio230.c
*
**/

#include<stdio.h>
#include<math.h>

int main(void){

	float lado1,lado2,lado3;
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.3.0 - \n");
	printf("\nDescripcion: Modificar el programa anterior para comprobar que los números ingresados conformen realmente un triángulo. En caso de no conformarlo no procederá a la clasificación, presentando en su lugar un mensaje de error y terminando la ejecución.\n\n");

	printf("Ingrese el primer lado del triangulo: ");
	scanf("%f",&lado1);
	printf("Ingrese el segundo lado del triangulo: ");
	scanf("%f",&lado2);
	printf("Ingrese el tercer lado del triangulo: ");
	scanf("%f",&lado3);

	if(lado1+lado2>lado3 && lado2+lado3>lado1 && lado3+lado1>lado2){

		if(lado1>0 && lado2>0 && lado3>0){

			if(lado1==lado2){

				if(lado2==lado3){

					printf("\nEl triangulo es equilatero.");

				}else if(lado2!=lado3){

					printf("\nEl triangulo es isoceles.");
			
				}

			}else if(lado2!=lado3){
				
				printf("\nEl triangulo es escaleno.");

			}else{

				printf("\nEl triangulo es isoceles.");

			}

		}else if(lado1<=0 || lado2<=0 || lado3<=0)perror("\nERROR: Carece de sentido que el lado sea negativo o nulo");

	}else{

		perror("\nERROR: Los valores de los lados ingresados no conforman un triangulo");

	}
	
	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	
	
}
