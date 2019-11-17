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
*  Nº de ejercicio: 2.5.5 - Ejercicio 5
*  Enunciado del ejercicio: Desarrollar un programa que calcule la superficie de un depósito de mercaderías, la superficie del terreno y
el porcentaje de terreno construido. Para ello solicitará cuatro valores correspondientes al frente y fondo del terreno y del depósito respectiva-
mente. Si alguno de los valores ingresados es menor que cero, deberá presentar un mensaje de error y solicitar un
nuevo valor. Si los 4 valores ingresados son 0, sale del programa.
*  Observaciones: gcc -o ejercicio255 ejercicio255.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.5.5 - \n");

	float sup_deposito, sup_terreno, porcentaje;
	int fondo_terreno, frente_terreno, fondo_deposito, frente_deposito;

	do{
		printf("\nIngrese la longitud del frente del deposito: ");
		scanf("%d",&frente_deposito);
		if(frente_deposito<0){
			printf("\nERROR: La longitud no puede ser negativo. Ingrese un nuevo valor por favor.\n");
		}
	}while(frente_deposito<0);

	do{
		printf("\nIngrese la longitud del fondo del deposito: ");
		scanf("%d",&fondo_deposito);
		if(fondo_deposito<0){
			printf("\nERROR: La longitud no puede ser negativo. Ingrese un nuevo valor por favor.\n");
		}
	}while(fondo_deposito<0);

	do{
		printf("\nIngrese la longitud del frente del terreno: ");
		scanf("%d",&frente_terreno);
		if(frente_terreno<0){
			printf("\nERROR: La longitud no puede ser negativo. Ingrese un nuevo valor por favor.\n");
		}
	}while(frente_terreno<0);

	do{
		printf("\nIngrese la longitud del fondo del terreno: ");
		scanf("%d",&fondo_terreno);
		if(fondo_terreno<0){
			printf("\nERROR: La longitud no puede ser negativo. Ingrese un nuevo valor por favor.\n");
		}
	}while(fondo_terreno<0);

	if(fondo_terreno==0 && fondo_deposito==0 && frente_deposito==0 && frente_terreno==0){
		return 0;
	}
	
	sup_deposito = frente_deposito * fondo_deposito;
	sup_terreno =  frente_terreno * fondo_terreno;
	porcentaje = (sup_deposito / sup_terreno) * 100;

	printf("\nLa superficie del deposito de mercaderías es: %f",sup_deposito);
	printf("\nLa superficie del terreno es: %f",sup_terreno);
	printf("\nEL porcentaje de terreno construido es: %f",porcentaje);

	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

}
