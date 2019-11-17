#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones_2a.h"

int main(int argc, char *argv[]){

    FILE *archivo;

    char *argumento;
    int tam;
    int nota;
    float promedio;
    int suma;
    int cant_notas;

    char linea[4];

    if(argc<2){

        perror("\nERROR. Debe ingresar mas argumentos.\n");
        return 0;

    }

    for(int i=1;i<argc;i++){

        tam = strlen(argv[i]);

        argumento = (char*) malloc(sizeof(char)*(tam+1));

        strcpy(argumento, argv[i]);

        AgregarExtension(argumento,tam);

        //printf("\n%s\n",argumento); 

        archivo = fopen(argumento,"r");

        if(archivo == NULL){

            perror("\nERROR. Se ha producido un error al abrir el archivo\n");
            return 0;

        }

        printf("\nNotas del alumno/a: %s\n",argv[i]);

        int j=1;

        cant_notas = 0;

        int suma = 0;

        while(fgets(linea,4,archivo)){

            nota = atoi(linea);

            suma += nota;

            printf("\n\tLa nota %d del alumno/a es: %d",j,nota);

            j++;
            cant_notas++;

        }

        promedio = (float) suma/ (float) cant_notas;

        printf("\n\n\tEl promedio del alumno/a %s es: %f",argv[i],promedio);

        printf("\n\n");

        fclose(archivo);

    }

    return 0;

}