#include <stdio.h>
#include <string.h>

int PasarAMinus(char *linea, int TAM3){

	int i, cant_letras;

	for(i=0;i<TAM3;i++){

		if((linea[i] >= 'A') && (linea[i] <= 'Z')){

			linea[i] = linea[i] + ('a'- 'A');

			cant_letras++;

		}

	}

	return cant_letras;

}

int main (int argc, char *argv[]){

    int TAM2;
    char *p;
    char linea[50];
	int cant_caracteres = 0;
	int letras = 0;

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
    strcat(string_final,"minus.txt");
    //printf("%s\n",string_final);

    FILE *archivo_minus = fopen(string_final,"w+");

    while(fgets(linea, 50, archivo)){

        TAM2 = strlen(linea);

        letras = PasarAMinus(linea, TAM2);

        fprintf(archivo_minus,"%s",linea);

		cant_caracteres += TAM2;

        }

	printf("\nLa cantidad de caracteres del archivo es: %d\n\n",cant_caracteres);
	printf("\nLa cantidad de letras del archivo es: %d\n\n",letras);

    fclose(archivo);
    fclose(archivo_minus);

    return 0;

}
