#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

char* recibeString(char *string);

void main(void){

    char string[1024];
    char *string_final;

    printf("Ingrese una cadena de texto: ");
    scanf("%[^\n]s",string);

    string_final = recibeString(string); 

    printf("\n\nEl string final es: %s",string_final);

}

char* recibeString (char *string){

    char *string_result;

    int longitud_string = strlen(string);

    string_result = (char*) malloc(sizeof(char)*(longitud_string+1));

    strcpy(string_result,string);

    return string_result;

}