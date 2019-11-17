/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.2.1 - Ejercicio 1
*  Enunciado del ejercicio: Escribir un programa que acepte por teclado el ingreso de tres números reales correspondientes a las dimensiones de cada lado de un triangulo. El programa deberá presentar en la pantalla si las dimensiones ingresadas corresponden a un triángulo equilátero, isósceles o escaleno, de acuerdo con los tres valores recibidos.
*  Observaciones: gcc -o ejercicio221 ejercicio221.c
*
**/

#include<stdio.h>
#include<math.h>

int main(void){

	float lado1,lado2,lado3;
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.2.1 - \n");
	printf("\nDescripcion: Programa para calcular el tipo de triangulo segun los lados ingresados.\n\n");

	printf("Ingrese el primer lado del triangulo: ");
	scanf("%f",&lado1);
	printf("Ingrese el segundo lado del triangulo: ");
	scanf("%f",&lado2);
	printf("Ingrese el tercer lado del triangulo: ");
	scanf("%f",&lado3);

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
	
	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	
	
}
