#include <stdio.h>
#include "texto.h"
#include <string.h>

#define TAM1 200
#define TAM2 200
#define TAM3 200
#define TAM4 200
#define TAM5 400

void main(void){

    printf("\n --> FUNCION primeraMayus <-- \n");

    char string1[TAM1];

    printf("\nIngrese una cadena de texto: ");
    fgets(string1, TAM1, stdin);

    primeraMayus(string1);

    printf("\nLa cadena de texto que devuelve la funcion primeraMayus es: %s\n",string1);

    printf("\n --> FUNCION Mayusculizar <-- \n");

    char string2[TAM2];

    printf("\nIngrese una cadena de texto: ");
    fgets(string2, TAM2, stdin);

    Mayusculizar(string2, TAM2);

    printf("\nLa cadena de texto que devuelve la funcion Mayusculizar es: %s\n",string2); 

    printf("\n --> FUNCION FormarNyA <-- \n"); 

    char nombre[TAM3];
    char apellido[TAM4];
    char nombreCompleto[TAM5];

    printf("\nIngrese un nombre: ");
    scanf("%[^\n]s",nombre);
    setbuf(stdin,NULL);
    printf("\nIngrese un apellido: ");
    scanf("%[^\n]s",apellido);

    int TAM_NomCom = FormarNyA(nombre, apellido, nombreCompleto);

    printf("\nLa cadena de texto que devuelve la funcion FormarNyA es: %s\n",nombreCompleto); 
    printf("\nLa cantidad de caracteres de la cadena es: %d\n\n",TAM_NomCom); 

}