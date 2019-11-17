#include <stdio.h>
#include <string.h>

int PasarAMayus(char *linea, int TAM3){

	int i;

	for(i=0;i<TAM3;i++){

		if((linea[i] >= 'a') && (linea[i] <= 'z')){

			linea[i] = linea[i] - ('a'- 'A');

		}

	}

	return 0;

}

int main (int argc, char *argv[]){

    int TAM2;
    char *p;
    char linea[50];

    if(argc<2){

        printf("Error. Debe ingresar mas argumentos.\n");
        return 0;

    }

    FILE *archivo = fopen(argv[1],"r");

    char *string = argv[1];
    char string2[50];
    char string_final[100];

    int tam_sintxt = strlen(string) - 4;
    strncpy(string2,string,tam_sintxt);
    //printf("%s\n",string2);
    strcpy(string_final,string2);
    //printf("%s\n",string_final);
    strcat(string_final,"mayus.txt");
    //printf("%s\n",string_final);

    FILE *archivo_mayus = fopen(string_final,"w+");

    while(fgets(linea, 50, archivo)){

        TAM2 = strlen(linea);

        PasarAMayus(linea, TAM2);

        fprintf(archivo_mayus,"%s",linea);

        }

    fclose(archivo);
    fclose(archivo_mayus);

    return 0;

}
