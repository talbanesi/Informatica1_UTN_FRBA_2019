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

int my_strcat(char *str1, char *str2){

	int tam1=0;
	int tam2=0;
    int i;

	while(*str1!='\0'){

        tam1++;
        str1+=1;

    }

    while(*str2!='\0'){

        tam2++;
        str2+=1;

    }

    //printf("\n\nLa longitud de la primer cadena inngresada es: %d\n\n",tam1);
    //printf("\n\nLa longitud de la segunda cadena inngresada es: %d\n\n",tam2);

    int tam3 = tam1 + tam2;

    //printf("\n\nLa longitud de la nueva cadena es: %d\n\n",tam3);

    char str3[tam3];

    for(i=0;i<tam3;i++){

    	if(i<=(tam1-1)){

    		str3[i]=str1[i];

    	}else{

    		str3[i]=str2[i-tam1];

    	}

    	printf("El valor del elemento es: %d\n",str3[i]);

    }

    printf("\n\n");

    //printf("\n --> La cadena de texto resultante es: %s\n\n",str3);

	return tam3;

}
