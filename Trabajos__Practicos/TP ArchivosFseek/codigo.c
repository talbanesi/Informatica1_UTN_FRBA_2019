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
    FILE *archivo_precios;
    float registro_componentes[10];
    char buffer[25];
    char buffer1[25];
    char buffer_aux[25];
    char buffer_aux1[25];
    char *token;
    int i=0;
    int cant=0;
    int cant_1=0;
    char str1[20];
    char str2[20];
    char str3[20];
    char str4[20];
    char str5[20];
    char str1_aux[20];
    char str2_aux[20];
    char str3_aux[20];
    char str4_aux[20];
    char str5_aux[20];
    int cant1;
    int cant2;
    int cant3;
    int cant4;
    int cant5;
    char delimit[] = "***";
    int j=1;

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

    while(fgets(buffer_aux,25,archivo_articulos)){

        cant++;

    }

    archivo_precios = fopen("lista_precios.txt","w+");

    rewind(archivo_registro);

    for(i=0;i<cant;i++){

        fseek(archivo_registro,7,SEEK_CUR);

        fgets(buffer,10,archivo_registro);

        //printf("\n\n%s",buffer);

        registro_componentes[i] = atof(buffer);

        //printf("\n\n%f",registro_componentes[i]);

    }

    while(fgets(buffer_aux1,25,archivo_registro)){

        cant_1++;

    }

    rewind(archivo_registro);

    for(i=0;i<cant_1;i++){

        fgets(buffer1,10,archivo_registro);

        token = strtok(buffer1,delimit);

        strcpy(str1,token);

        while( token != NULL ) {

            j++;
            
            //printf( " %s\n", token );
    
            token = strtok(NULL, delimit);

            if(j==2){
                strcpy(str2, token);
            }else if(j==3){
                strcpy(str3, token);
            }else if(j==4){
                strcpy(str4, token);
            }else if(j==5){
                strcpy(str5, token);
            }

        }

        cant1 = atoi(strchr(str1,'-'));
        cant2 = atoi(strchr(str2,'-'));
        cant3 = atoi(strchr(str3,'-'));
        cant4 = atoi(strchr(str4,'-'));
        cant5 = atoi(strchr(str5,'-'));

        strncpy(str1_aux,str1,6);
        strncpy(str2_aux,str2,6);
        strncpy(str3_aux,str3,6);
        strncpy(str4_aux,str4,6);
        strncpy(str5_aux,str5,6);

    }

    fclose(archivo_registro);
    fclose(archivo_articulos);

    return 0;

}