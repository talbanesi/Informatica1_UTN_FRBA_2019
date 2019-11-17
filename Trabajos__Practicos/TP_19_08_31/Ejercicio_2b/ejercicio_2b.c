#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones_2b.h"

int main(void){

    char nombre_alumno[50];
    int tam_nombre;

    alumnosDatos_t alumno;

    printf("\nIngrese el nombre del alumno/a para visualizar sus notas y su promedio: ");
    scanf("%s",nombre_alumno);

    alumno = DatosAlumnos(nombre_alumno);

    ImprimirNotas(alumno);

    return 0;

}