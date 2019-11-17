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

typedef struct alumno alumno_t; //Puedo llamarlo mediante alumno o alumno_t

void main(void){

    //alumno_t alum1; Es reemplazado por lo siguiente:

    alumno_t alumnos[CANT]; //Creo un array de estructuras, que en este caso es de 3. Cada bloque tiene los mismos campos que la estructura

    int i;

    for(i=0;i<CANT;i++){

        setbuf(stdin, NULL);
        printf("\nIngrese el nombre del alumno %d: ",i);
        scanf("%[^\n]s",alumnos[i].nombre);
        setbuf(stdin, NULL);
        printf("\nIngrese el apellido del alumno %d: ",i);
        scanf("%[^\n]s",alumnos[i].apellido);
        setbuf(stdin, NULL);
        printf("\nIngrese la edad del alumno %d: \n",i);
        scanf("%d",&alumnos[i].edad);

    }

    /*Lo puedo reemplazar por lo siguiente:
    strcpy(alum1.nombre,"Tomas"); //Tambien lo puedo asignar con un scanf o fgets // Por ejemplo, para acceder a la segunda letra, podemos usar: alum1.nombre[1] = 'O', si la quiero cambiar por una letra mayuscula
    strcpy(alum1.apellido,"Albanesi"); //Tambien lo puedo asignar con un scanf o fgets
    alum1.edad = 19;
    */

}