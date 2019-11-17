/**
*
*  Infomática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos:  Albanesi, Tomas Agustin
                        Gonzalez Perez, Jose
                        Mella, Camila
                        Alvarez, Gerson
                        Magallanes, Claudio
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 6.3 - Ejercicio 3
*  Enunciado del ejercicio: Modificar el programa del ítem 6.1 para que, solicite al usuario el ingreso de la cadena de texto siempre que
no haya recibido nada como argumento por línea de comando.
*  Observaciones: gcc -o ejercicio630 ejercicio630.c
*
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){

    char *string;
    int cant_caracteres;
    char esperar;

    printf("\n - GUIA TP 2018 - EJERCICIO 6.3 - \n\n\n");

    string = (char*) malloc(sizeof(char));

    if(string == NULL){

      perror("\nERROR. NO SE PUDO RELIZAR LA ASIGNACION DINAMICA DE LA MEMORIA\n");
      return 0;

    }

    if(argc<2){

      printf("Ingrese una cadena de texto: ");
      gets(string);

    }else{

      strcpy(string,argv[1]);

    }

    cant_caracteres = strlen(string);

    string = realloc(string,sizeof(char)*(cant_caracteres+1));

    if(string == NULL){

      perror("\nERROR. NO SE PUDO RELIZAR LA REASIGNACION DINAMICA DE LA MEMORIA\n");
      return 0;

    }

    printf("\n\n\nPresione una tecla para mostrar la cadena de texto ingresada: ");
    esperar = getchar();
    while(esperar==0);
    fprintf(stdout,"\n\n\n%s\n\n\n",string);

    return 0;

}
