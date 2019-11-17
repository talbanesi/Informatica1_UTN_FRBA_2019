#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones_2c.h"

int main(int argc, char *argv[]){

    char nombre_alumno[50];
    int tam_nombre;

    alumnosDatos_t alumno;

    if(argc<2){

        perror("\nERROR. Debe ingresar mas argumentos.\n")

    }

    printf("\nIngrese el nombre del alumno/a para visualizar sus notas y su promedio: ");
    scanf("%s",nombre_alumno);

    alumno = DatosAlumnos(nombre_alumno);

    ImprimirNotas(alumno);

    return 0;

}