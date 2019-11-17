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
*  Nº de ejercicio: 6.1 - Ejercicio 1
*  Enunciado del ejercicio: Escribir un programa que solicite al usuario una el ingreso de una cadena de texto desde el teclado. Utilizar
la función gets () para este fin. Para evitar sobredimensionar estáticamente la sección de datos del pro-
grama se utilizará como argumento de gets () una variable de tipo puntero a char, al que se le asignará
dinámicamente una cantidad de memoria suficiente para, a pesar del warning que de todos modos enviara el
compilador, poder estar seguros que soportará la cantidad de caracteres ingresados por el usuario.
Una vez ingresada la cadena, el programa ajustará ("reallocará") la cantidad de memoria pedida al sistema operativo, de modo tal de utilizar para almacenar la cadena ingresada, la cantidad de memoria estrictamente
necesaria.
Una vez ingresada la cadena presentará por stdout un mensaje solicitando al usuario que presiones una
tecla para imprimir la cadena. El programa esperará la tecla y una vez pulsada cualquier tecla presentará por
stdout la cadena ingresada.
Importante: Recordar que todo lo que le pedimos al Sistema Operativo hemos de devolverlo . . .
Sugerencia: Invocar getchar () para esperar a tecla. Utilizar caracteres nueva línea para que la cadena
ingresada, el mensaje de pulsar la tecla, y la cadena presentada tengan una separación adecuada entre si
constituyendo tres claros bloques en la pantalla.
*  Observaciones: gcc -o ejercicio610 ejercicio610.c
*
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char *string;
    int cant_caracteres;
    char esperar;

    printf("\n - GUIA TP 2018 - EJERCICIO 6.1 - \n\n\n");

    string = (char*) malloc(sizeof(char));

    if(string == NULL){

      perror("\nERROR. NO SE PUDO RELIZAR LA ASIGNACION DINAMICA DE LA MEMORIA\n");
      return 0;

    }

    printf("Ingrese una cadena de texto: ");
    gets(string);

    cant_caracteres = strlen(string);

    string = realloc(string,sizeof(char)*(cant_caracteres+1));

    if(string == NULL){

      perror("\nERROR. NO SE PUDO RELIZAR LA REASIGNACION DINAMICA DE LA MEMORIA\n");
      return 0;

    }

    printf("\n\n\nPresione una tecla para mostrar la cadena de texto ingresada: ");
    esperar = getchar();
    while(esperar==0);
    fprintf(stdout,"\n\n\nLa cadena de texto ingresada es: %s\n\n\n",string);

    return 0;

}
