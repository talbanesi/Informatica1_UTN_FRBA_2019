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
*  Nº de ejercicio: 2.5.2 - Ejercicio 2
*  Enunciado del ejercicio: Mejorar el programa anterior para que además de indicar la cantidad de puntos en cada cuadrante, indique la
cantidad de puntos en el eje de la ordenadas y cuantos en el eje de las abscisas.
*  Observaciones: gcc -o ejercicio252 ejercicio252.c
*
**/

#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.5.2 - \n");

    int primer_cuadrante=0,segundo_cuadrante=0,tercer_cuadrante=0,cuarto_cuadrante=0;
    int x,y,i=1;
    int ordenadas=0,abscisas=0;

    do{

        printf("\n  Ingrese la coordenada de X%d: ",i);
        scanf("%d",&x);
        printf("  Ingrese la coordenada de Y%d: ",i);
        scanf("%d",&y);
        i++;
        
        if(x>0 && y>0){

	        primer_cuadrante++;

	    }else if(x<0 && y>0){

	        segundo_cuadrante++;

	    }else if(x<0 && y<0){

	        tercer_cuadrante++;

	    }else if(x>0 && y<0){

	        cuarto_cuadrante++;

	    }else if(x==0){

            ordenadas++;

        }else if(y==0){

            abscisas++;

        }

    }while(x!=0 || y!=0);

    printf("\nEl numero de puntos en el primer cuadrante es de: %d",primer_cuadrante);
    printf("\nEl numero de puntos en el segundo cuadrante es de: %d",segundo_cuadrante);
    printf("\nEl numero de puntos en el tercer cuadrante es de: %d",tercer_cuadrante);
    printf("\nEl numero de puntos en el cuarto cuadrante es de: %d",cuarto_cuadrante);
    printf("\nEl numero de puntos sobre el eje de las ordenadas es de: %d",ordenadas);
    printf("\nEl numero de puntos sobre el eje de las abscisas es de: %d",abscisas);

    printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
    printf("              - GONZALEZ PEREZ, JOSE\n");
    printf("              - MELLA, CAMILA\n");
    printf("              - ALVAREZ, GERSON\n");
    printf("              - MAGALLANES, CLAUDIO\n\n");

    return 0;

}