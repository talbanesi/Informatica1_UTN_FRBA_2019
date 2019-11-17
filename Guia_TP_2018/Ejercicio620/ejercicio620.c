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
*  Nº de ejercicio: 6.2 - Ejercicio 2
*  Enunciado del ejercicio: Escribir un programa que imprima en pantalla en una primer línea la cantidad de argumentos que se le
proporcionaron por línea de comandos y a continuación, a razón de uno por línea, cada uno de los argumentos
recibidos por línea de comando. La cantidad de argumentos que puede recibir no tiene límite.
Pista: Ensayar invocando al programa con una sucesión de palabras separadas por espacios, y luego volver
a invocarlo encerrando todos los argumentos entre comillas dobles. Por ejemplo: ./p hola mundo!
Que tal? en primer lugar y luego ./p "hola mundo! Que tal?". ¿Cuales son las diferencias?
¿Que conclusiones puede sacar de este experimento?
*  Observaciones: gcc -o ejercicio620 ejercicio620.c
*
**/

#include <stdio.h>

int main(int argc, char *argv[]){

    int i;

    printf("\n - GUIA TP 2018 - EJERCICIO 6.2 - \n");

    if(argc<2){

      perror("\nERROR. DEBE INGRESAR MAS ARGUMENTOS ");
      printf("\n");
      return 0;

    }

    printf("\nLa cantidad de arguementos ingresados por consola fueron: %d\n\n",argc);

    for(i=0;i<argc;i++){

      printf("El argumento %d es: %s",i,argv[i]);
      printf("\n");

    }

    printf("\n");

    return 0;

}

/* CONCLUSIONES:

Las conclusiones obtenidas fueron que si los argumentos del main se colocan entra comillas, el programa recibe todo lo que esta dentro de las comillas
como un solo string/argumento del main, y no tiene en cuenta los espacios del string que esta dentro de las comillas. En cambio, si los argumentos se
colocan sin comillas (agrupandolos) el programa toma como argumento cada vez que hay presente una espacio. En el caso de ejecutar: ./ejercicio620
hola mundo! Que tal?, toma 5 argumentos, los cuales serian ./ejercicio620 / hola / mundo! / Que / tal? /.
Y en el otro caso de ejecutar ./ejercicio620 "hola mundo!" "Que tal?",
toma solamente 3 argumentos, los cuales serian: ./ejercicio620 / hola mundo! / Que tal? /.
