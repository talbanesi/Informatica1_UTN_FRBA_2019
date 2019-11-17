#include <stdio.h>

int main(void){

	printf("\n - GUIA TP 2018 - EJERCICIO 2.5.1 - \n");

    int primer_cuadrante=0,segundo_cuadrante=0,tercer_cuadrante=0,cuarto_cuadrante=0;
    int x,y,i=1;

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

	    }

    }while(x!=0 && y!=0);

    printf("\nEl numero de puntos en el primer cuadrante es de: %d",primer_cuadrante);
    printf("\nEl numero de puntos en el segundo cuadrante es de: %d",segundo_cuadrante);
    printf("\nEl numero de puntos en el tercer cuadrante es de: %d",tercer_cuadrante);
    printf("\nEl numero de puntos en el cuarto cuadrante es de: %d",cuarto_cuadrante);

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

}