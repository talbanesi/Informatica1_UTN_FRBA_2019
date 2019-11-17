/**
*
*  Informática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos: 	Albanesi, Tomas Agustin
						Gonzalez Perez, Jose
						Mella, Camila
						Alvarez, Gerson
						Magallanes, Claudio
*  Descripcion: 
*  Formato de llamada: 
*  Argumentos: 
*  Retorno: 
*  Observaciones:
*
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int completar_arreglo(int *arreglo, int L){

	int rand_max,i;
	int contador_ok=0,contador_mal=0,j;

	printf("Ingrese el rango máximo con el que quiere que el arreglo sea completado: ");
	scanf("%d",&rand_max);

	srand(time(NULL));

	for(i=0;i<=L;i++){

		arreglo[i] = rand() % rand_max;

	}

	for(j=0;j<=L;j++){

		if(arreglo[j]>=0 && arreglo[j]<rand_max){
			contador_ok++;
		}else{
			contador_mal++;
		}

	}

	return *arreglo,contador_ok;

}
