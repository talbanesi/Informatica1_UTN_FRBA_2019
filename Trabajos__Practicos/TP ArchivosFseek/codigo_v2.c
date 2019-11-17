#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

    char *string_registro;
    char *string_articulos;
    int tam_registro;
    int tam_articulos;
    FILE *archivo_registro;
    FILE *archivo_articulos;
    float registro_componentes[10];
    char buffer[100];
    char buffer1[100];
    char *token;
    char *delimitador = "***"
    int i=0;
    int cont=0;
    char cod_art[10];
    char comp1[10];
    char comp2[10];
    char comp3[10];

    if(argc<2){

        printf("\n\nERROR! Debe ingresar mas argumentos.\n\n");
        return 0;

    }

    tam_registro = strlen(argv[1]);
    tam_articulos = strlen(argv[2]);

    string_registro = (char*) malloc(sizeof(char)*(tam_registro+4+1));
    string_articulos = (char*) malloc(sizeof(char)*(tam_articulos+4+1));

    strcpy(string_registro,argv[1]);
    strcat(string_registro,".txt");
    strcpy(string_articulos,argv[2]);
    strcat(string_articulos,".txt");

    archivo_registro = fopen(string_registro,"r");

    if(archivo_registro == NULL){

        printf("\n\nERROR! Se ha producido un error al abrir el archivo %s\n\n",string_registro);
        return 0;

    }

    archivo_articulos = fopen(string_articulos,"r");

    if(archivo_articulos == NULL){

        printf("\n\nERROR! Se ha producido un error al abrir el archivo %s\n\n",string_articulos);
        return 0;

    }

    while(fgets(buffer,100,archivo_registro)){

        cont1++;

    }

    while(fgets(buffer1,100,archivo_articulos)){

        token = strtok(buffer1, delimitador);

        cod
   
        while( token != NULL ) {
     
            token = strtok(NULL, s);

        }

    }

    for(i=0;i<cont;i++){






    }

    for(int j=0;j<10;j++){

        printf("Valor %d: %f",j,registro_componentes[j]);

    }
    

    fclose(archivo_registro);
    fclose(archivo_articulos);

    return 0;

}