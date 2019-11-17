#include<stdio.h>
#include<stdlib.h>

#define L 25
#define M 10
#define CANT 4

struct alumno{

    char nombre[L];
    char apellido[L];
    int notas[M];
    int edad;
    float promedio;

};

typedef struct alumno alumno_t;

int IngresarDatosAlumnos(alumno_t *pAlumnos, int cant){

    printf("\n --> INGRESO DE DATOS <--\n");

    for(int i=0;i<cant;i++){

        setbuf(stdin, NULL);
        printf("\nIngrese el nombre del alumno %d: ",i);
        scanf("%[^\n]s",(pAlumnos+i) -> nombre);
        setbuf(stdin, NULL);
        printf("\nIngrese el apellido del alumno %d: ",i);
        scanf("%[^\n]s",(pAlumnos+i) -> apellido);
        setbuf(stdin, NULL);
        printf("\nIngrese la edad del alumno %d: ",i);
        scanf("%d",&(pAlumnos+i) -> edad);

    }

    return 0;

}

int ImprimirDatosAlumnos(alumno_t *pAlumnos, int cant){

  printf("\n --> IMPRESION DE DATOS <--\n");

  for(int i=0;i<cant;i++){

      printf("\nEl nombre del alumno %d es: %s ",i,(pAlumnos+i) -> nombre);
      printf("\nEl nombre del alumno %d es: %s ",i,(pAlumnos+i) -> apellido);
      printf("\nLa edad del alumno %d es: %d \n\n",i,(pAlumnos+i) -> edad);

  }

  return 0;

}

int main(void){

    alumno_t alumnos[CANT];
    alumno_t *pAlumnos = alumnos;

    IngresarDatosAlumnos(pAlumnos,CANT);
    ImprimirDatosAlumnos(pAlumnos,CANT);

    return 0;

}
