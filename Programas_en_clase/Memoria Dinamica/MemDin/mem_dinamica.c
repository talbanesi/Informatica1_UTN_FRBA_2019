#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void){

    char *string;
    int tam;

    printf("\nIngrese el tamaño del string: ");
    scanf("%d",&tam);

    string = (char *) malloc(sizeof(char) * tam);

    printf("\nIngrese su cadena de texto: ");
    scanf("%[^\n]s",string);

    tam_real = strlen(string);

    if(tam_real > tam){
        string = (char *) realloc(string, (tam_real-tam))
    }


}