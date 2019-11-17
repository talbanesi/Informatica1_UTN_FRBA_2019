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
*  Nº de ejercicio: 6.4 - Ejercicio 4
*  Enunciado del ejercicio: En base al ejercicio 6.3 y empleando las funciones de definidas en string.h, trabaje con la cadena ingre-
sada, realizando las siguientes operaciones:
• Agregar la cadena ingresada a la siguiente cadena fija: La cadena ingresada es: , de modo que al
presentarla con printf, la cadena se imprima a partir del siguiente renglón del mensaje
• Insertar en la cadena ingresada la cantidad necesaria de caracteres nueva línea (’\n’) para que la misma
se imprima a razón de 25 caracteres por línea.
*  Observaciones: gcc -o ejercicio640 ejercicio640.c
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
    char *string_destino;

    printf("\n - GUIA TP 2018 - EJERCICIO 6.4 - \n\n\n");

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

    string_destino = (char*) malloc(sizeof(char)*(cant_caracteres+27));

    if(string == NULL){

      perror("\nERROR. NO SE PUDO RELIZAR LA REASIGNACION DINAMICA DE LA MEMORIA\n");
      return 0;

    }

    strcpy(string_destino, "La cadena ingresada es: \n");
    strcat(string_destino, string);

    printf("\n\n\nPresione una tecla para mostrar la cadena de texto ingresada: ");
    esperar = getchar();
    while(esperar==0);
    fprintf(stdout,"\n\n\n%s\n\n\n",string_destino);

    return 0;

}
