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
*  Nº de ejercicio: 1) d)
*  Enunciado del ejercicio: modificar el programa anterior para que cuente la cantidad de letras del archivo y las imprima en pantalla.
*  Observaciones: gcc -o ejercicio_1d ejercicio_1d.c funciones_1d.c
*
**/

#include <stdio.h>
#include <string.h>
#include "funciones_1d.h"

int main (int argc, char *argv[]){

    int TAM2;
    char *p;
    char linea[50];
    int cant = 0;

    if(argc<2){

        printf("Error. Debe ingresar mas argumentos.\n");
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
    strcat(string_final,"minus.txt");
    //printf("%s\n",string_final);

    FILE *archivo_minus = fopen(string_final,"w+");

    if(archivo_minus == NULL){

      perror("\nError al crear el nuevo archivo.");

    }else{

      printf("\nEl nuevo archivo fue creado con exito.\n");

    }

    while(fgets(linea, 50, archivo)){

        TAM2 = strlen(linea);

        PasarAMinus(linea, TAM2);

        cant = cant + CuentaLetras(linea, TAM2);

        fprintf(archivo_minus,"%s",linea);

        }

    printf("\nLa cantidad de letras del archivo es: %d\n\n",cant);

    fclose(archivo);

    if(fclose(archivo) == EOF){

			perror("\nError al guardar el archivo original");
			return 0;

		}

    fclose(archivo_minus);

    return 0;

}
