#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float CalcularPromedio(float *array, int tam){

    float suma=0;
    int i;
    float promedio;

    for(i=0;i<tam;i++){

        suma += array[i];

    }

    promedio = suma / tam;

    return promedio;

}

float CalcularMaximo(float *array, int tam){

    float mayor;
    int i;

    for (i=0; i<tam; i++){

        if (array[i] >= mayor){

            mayor = array[i];

        }
    }   

    return mayor;

}

int main(int argc, char *argv[]){

    FILE *archivo;
    FILE *archivo_est;

    float promedio;
    float maximo;

    char delimitador[] = "/";
    char *token;
    float array[10];
    int j=0;
    int i;

    char linea[100];

    if(argc<2){

        perror("\nERROR. Debe ingresar mas argumentos.\n");
        return 0;

    }

    archivo = fopen(argv[1],"r");

    if(archivo == NULL){

        perror("\nERROR. Se ha producido un error al abrir el archivo\n");

    }


    archivo_est = fopen("estadistica.txt","a");

    if(archivo_est == NULL){

        perror("\nERROR. Se ha producido un error al abrir o crear el archivo\n");

    }

    while(fgets(linea,70,archivo)){

        i=0;

        token = strtok(linea, delimitador);

        while(token != NULL){

                // Sólo en la primera pasamos la cadena; en las siguientes pasamos NULL
                
                //printf("Token: %s\n", token);

                array[i] = atof(token);

                //printf("Token: %f\n", array[i]);

                token = strtok(NULL, delimitador);

                i++;

        }

        promedio = CalcularPromedio(array,10);
        maximo = CalcularMaximo(array,10);

        fprintf(archivo_est,"valores x-x: promedio %f maximo %f\n",promedio,maximo);

    }

    fclose(archivo);
    fclose(archivo_est);

    return 0;

}



