#include <stdio.h>
#include <string.h>

#define lfrase 100
#define lpalabra 20

int InsertarString(char *dest, char *sins, int lugar, int largo);

void main(void){

    int tampalabra;
    int tamfrase;
    int lugar;

    char frase[lfrase];
    char palabra[lpalabra];

    printf("\nIngrese una frase: ");
    scanf("%[^\n]s",frase);
    setbuf(stdin,NULL);
    printf("\nIngrese la palabra que quiere insertar en la frase: ");
    scanf("%[^\n]s",palabra);
   
    tamfrase = strlen(frase);
    tampalabra = strlen(palabra);

    int largo_total = tamfrase + tampalabra;

    printf("\nIngrese el lugar en el que quiere insertar la palabra: ");
    scanf("%d",&lugar);

    int longitud_final = InsertarString(frase, palabra, lugar, largo_total);

    printf("La longitud de la cadena de texto final es: %d\n\n",longitud_final);

}

int InsertarString(char *frase, char *palabra, int lugar, int largo_total){

    char string_destino[1024];
    char *espacio = " ";
    char auxiliar[1024];
    char *puntero = &frase[0 + lugar];

    if(strlen(palabra)>=strlen(frase)){

        printf("\nNo alcanza el largo del string total\n");
        return -1;

    }

    if(lugar >= strlen(frase)){

        printf("\nEl lugar elegido para instertar la palabra supera a largo de la frase\n");
        return -2;

    }

    strcpy(auxiliar, puntero);
    //printf("%s",auxiliar);
    frase[0 + lugar] = '\0';
    strcpy(string_destino, frase);
    strcat(string_destino, palabra);
    strcat(string_destino, espacio);
    strcat(string_destino, auxiliar);

    printf("\nLa cadena de texto formada finalmente es: %s\n\n",string_destino);

    int tam_final = strlen(string_destino);

    return tam_final;

}
