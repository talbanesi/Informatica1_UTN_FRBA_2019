/**
*
*  Infomática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos:  Albanesi, Tomas Agustin
                        Mella, Camila
                        Gonzalez Perez, Jose
                        Alvarez, Gerson
                        Magallanes, Claudio
*  Ejericios en clase 31/08/2019
*  Nº de ejercicio: 1) a)
*  Enunciado del ejercicio: Realizar un programa que permita pasar a mayúsculas todas las letras de un archivo
de texto cuyo nombre recibe como argumento del main y lo imprima en pantalla.
*  Observaciones: gcc -o ejercicio_1a ejercicio_1a.c funciones_1a.c
*
**/

#include <stdio.h>
#include <string.h>
#include "funciones_1a.h"

int main (int argc, char *argv[]){

    int TAM2;
    char *p;
    char linea[50];

    if(argc<2){

        perror("\nError. Debe ingresar mas argumentos.");
        return 0;

    }

    FILE *archivo = fopen(argv[1],"r");

		if(archivo == NULL){

			perror("\nError al abrir el archivo.");
			return 0;

		}

    printf("\n");

    while(fgets(linea, 50, archivo)){

        TAM2 = strlen(linea);

        PasarAMayus(linea, TAM2);

        printf("%s",linea);

        }

    printf("\n");

    fclose(archivo);

		if(fclose(archivo) == EOF){

			perror("\nError al guardar el archivo original");
			return 0;

		}

    return 0;

}
