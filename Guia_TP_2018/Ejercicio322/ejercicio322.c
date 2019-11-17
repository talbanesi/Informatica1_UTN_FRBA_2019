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
*  Nº de ejercicio: 3.2.2 - Ejercicio 2
*  Enunciado del ejercicio: Utilizando la función rand () definida en stdlib.h, simular 50 tiros de un dado. El programa debe
presentar por stdout los 50 valores (entre 1 y 6) equiespaciados comenzando un valor cada 4 columnas de
código en pantalla, y a razón de 25 valores por línea (es decir que cada 25 valores generados y presentados
debe enviar a stdout un caracter fin de línea.
Ejecutar varias veces y observar los resultados. ¿Que concluye acerca de la aleatoriedad de la función uti-
lizada?
*  Observaciones: gcc -o ejercicio322 ejercicio322.c
*
**/

/*CONCLUSION: 	Al repetir el programa varias veces se puede obeservar que los numeros aleatorios simempre son los mismos.
				Es decir, que la funcion rand() siempre genera los mismos numeros. Esto es debido a que en el lenguaje C no
				dispone de numeros aleatorios, sino que lo que puede generar son numeros pseudoaletatorios, los cuales se 
				generan en base a una semilla que utlizan como numero principal. Y por eso, los numeros aleatorios no cambian.
*/

#include<stdio.h>
#include<stdlib.h>
 
int main(void){

	int tiros_dado;
	int i;

	printf("\n - GUIA TP 2018 - EJERCICIO 3.2.2 - \n\n");

	for(i=1;i<=50;i++){

		tiros_dado = rand() % 6 + 1;

		if(i>=1 && i<=25){

			fprintf(stdout, "    %d",tiros_dado);

		}else if(i==26){

			fprintf(stdout, "\n    %d",tiros_dado);

		}else if(i>26 && i<=50){

			fprintf(stdout, "    %d",tiros_dado);

		}

	}

	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

	return 0;

}