/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.2.2 - Ejercicio 2
*  Enunciado del ejercicio: Mejorar el programa anterior para que verifique que los tres números ingresados son positivos ya que de otro
modo carece de sentido, e informe al usuario el resultado o el mensaje de error correspondiente, en caso de
no ser positivo al menos un número de los ingresados.
*  Observaciones: gcc -o ejercicio222 ejercicio222.c
*
**/

#include<stdio.h>
#include<math.h>

int main(void){

	float lado1,lado2,lado3;
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.2.2 - \n");
	printf("\nDescripcion: Programa para calcular el tipo de triangulo segun los lados ingresados, verificando que los lados sean positivos.\n\n");

	printf("Ingrese el primer lado del triangulo: ");
	scanf("%f",&lado1);
	printf("Ingrese el segundo lado del triangulo: ");
	scanf("%f",&lado2);
	printf("Ingrese el tercer lado del triangulo: ");
	scanf("%f",&lado3);

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

	}else if(lado1<=0 || lado2<=0 || lado3<=0)printf("\nERROR: Carece de sentido que el lado sea negativo o nulo");
	
	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	
	
}
