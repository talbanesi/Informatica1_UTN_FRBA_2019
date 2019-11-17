#include <stdio.h>

int main(void){

    FILE *file = fopen("ejercicio1010.c","r");

    int x;

    printf("\n");

    while((x = fgetc(file)) != EOF){

        printf("%c",x);

    }

    printf("\n");

    fclose(file);

    return 0;

}
