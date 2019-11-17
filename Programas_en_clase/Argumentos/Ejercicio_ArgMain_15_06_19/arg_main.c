#include <stdio.h>
#include <string.h>

#define CANT_ARG_MIN 2

#define L 200

int main(int argc,char *argv[]) {

    int longitud;
    int i;


    if(argc<2) {
		printf("\nError. Debe ingresar argumentos.\n\n");
        return 0;
	}

    char string[L];

    printf("Ingrese una frase: ");
    fgets(string, L, stdin); //scanf("%[^\n]s",string);

    char *puntero;

    for(int j=0;j<argc;j++){

        longitud = strlen(argv[j]); 

        do{

        puntero = strstr(string,argv[j]);

        if(puntero != NULL){

            for(i=0;i<longitud;i++){

                *(puntero+i) = 'X';

            }

        }

        }while(puntero!=NULL);

    }

    printf("%s",string);

    }

    
