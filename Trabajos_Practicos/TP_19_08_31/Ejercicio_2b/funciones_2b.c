#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones_2b.h"

void AgregarExtension(char *argumento, int tam){

    char *argumento_con_ext;

    argumento = realloc(argumento,sizeof(char)*(tam+1+4)); //Reservo el espacio para el string mas el /0 mas el .dat

    strcat(argumento,".dat");

}

alumnosDatos_t DatosAlumnos(char *nombre_alumno){

    alumnosDatos_t alumno_aux;

    FILE *archivo;

    char *argumento;
    int tam;
    int nota;
    float promedio;
    int suma;
    int cant_notas;

    char linea[4];

    tam = strlen(nombre_alumno);

    argumento = (char*) malloc(sizeof(char)*(tam+1));

    strcpy(argumento, nombre_alumno);

    AgregarExtension(argumento,tam);

    //printf("\n%s\n",argumento); 

    archivo = fopen(argumento,"r");

    if(archivo == NULL){

        perror("\nERROR. Se ha producido un error al abrir el archivo\n");

    }

    cant_notas = 0;

    suma = 0;

    while(fgets(linea,4,archivo)){

        nota = atoi(linea);

        alumno_aux.notas[cant_notas] = nota;

        suma += nota;

        cant_notas++;

    }

    promedio = (float) suma/ (float) cant_notas;

    alumno_aux.cantidad_notas = cant_notas;
    alumno_aux.promedio = promedio;

    fclose(archivo);

    return alumno_aux;

}

void ImprimirNotas(alumnosDatos_t alumno){

    printf("\nLa cantidad de notas del alumno/a es: %d\n",alumno.cantidad_notas);

    for(int k=1;k<=alumno.cantidad_notas;k++){

        printf("\nLa nota %d del alumno/a es: %d",k,alumno.notas[k-1]);


    }
    
    printf("\n\nEL promedio del alumno/a es: %f\n\n",alumno.promedio);

}
