/**
*
*  Infomática I
*  Año: 2019
*  Nombre alumno: Albanesi, Tomas Agustin
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.1.2 - Ejercicio 2
*  Enunciado del ejercicio: Mejorar el programa anterior para que verifique que el número ingresado es positivo ya que de otro modo
carece de sentido, e informe al usuario el resultado o en caso de no ser positivo el radio el mensaje de error
correspondiente.
*  Observaciones: gcc -o ejercicio212 ejercicio212.c -lm
*
**/

#include<stdio.h>
#include<math.h>

#define PI 3.1415

int main(void){

	int radio;
	float superficie;
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.1.2 - \n");
	printf("\nDescripcion: Programa para calcula la superficie de un circulo ingresando un radio entero, verificando si este es positivo.\n\n");

	printf("Ingrese el radio del circulo: ");
	scanf("%d",&radio);

	if(radio<=0){
	
		printf("\n\nERROR: Carece de sentido que el radio sea negativo o nulo. Por favor ingrese un radio positivo\n\n");

	}else{

	superficie = PI * pow(radio,2);

	printf("\nLa superficie del circulo es: %f",superficie);

	}
	
	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	
	
}
