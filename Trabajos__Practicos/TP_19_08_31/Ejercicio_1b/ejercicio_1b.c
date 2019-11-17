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
*  Nº de ejercicio: 1) b)
*  Enunciado del ejercicio: Generar un nuevo archivo llamado «nombre_anterior»+mayus.txt
que contenga el archivo original pasado a mayus.
*  Observaciones: gcc -o ejercicio_1b ejercicio_1b.c funciones_1b.c
*
**/

#include <stdio.h>
#include <string.h>
#include "funciones_1b.h"

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

    char *string = argv[1];
    char string2[50];
    char string_final[100];

    int tam_sintxt = strlen(string) - 4;
    strncpy(string2,string,tam_sintxt);
    //printf("%s\n",string2);
    strcpy(string_final,string2);
    //printf("%s\n",string_final);
    strcat(string_final,"mayus.txt");
    //printf("%s\n",string_final);

    FILE *archivo_mayus = fopen(string_final,"w+");

    while(fgets(linea, 50, archivo)){

        TAM2 = strlen(linea);

        PasarAMayus(linea, TAM2);

        fprintf(archivo_mayus,"%s",linea);

        }

    fclose(archivo);

		if(fclose(archivo) == EOF){

			perror("\nError al guardar el archivo original");
			return 0;

		}

    fclose(archivo_mayus);

    return 0;

}
