#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{

    char nombre [50];
    int partidos_ganados;
    int partidos_empatados;
    int partidos_perdidos;
    int goles_a_favor;
    int goles_en_contra;
    int puntos;

} equipo_t;

int CargarEquipo(equipo_t *pe, char *archivo_arg){

    char string[50];
    char string_nom[50];
    char v1[3];
    char *v2;
    char p;
    int vaux;
    int i;
    char linea[10];
    char *pdelim;
    int tam2;
    /*
    strcpy(string,archivo_arg);
    int tam = strlen(string);
    int tam_sin_ext = tam - 4;
    strncpy(string_nom,string,tam_sin_ext);
    */

    FILE *archivo = fopen(archivo_arg,"r");

    if(archivo == NULL){

        perror("\nError al abrir el archivo.");
        return 0;

    }

    strcpy(pe -> nombre,archivo_arg);

    while(fgets(linea, 10, archivo)){

        char aux[10];
        char *aux1;

        strcpy(aux,linea);

        tam2 = strlen(linea);

        aux1 = strchr(aux,',');
        aux1[0]='\0';
        aux1++;

        //v2 = strtok(linea,",");
        //strcpy(v1,linea);

        int v1_num = atoi(aux);
        int v2_num = atoi(aux1);

        pe -> goles_a_favor += v1_num;
        pe -> goles_en_contra += v2_num;

        if(v1_num > v2_num){

            (pe -> partidos_ganados)++;

        }else if(v1_num == v2_num){

            (pe -> partidos_empatados)++;

        }else if(v1_num < v2_num){

            (pe -> partidos_perdidos)++;

        }

    }

    fclose(archivo);

}

int main(int argc, char *argv[]){

    int i;

    if(argc<2){

        perror("\nError. Debe ingresar mas argumentos.");
        return 0;

    }

    equipo_t equipo;

    //equipo = (equipo_t*) malloc(sizeof(equipo_t)*(argc-1));

    CargarEquipo(&equipo,argv[1]);

    printf("\nEl nombre del equipo es: %s",equipo.nombre);
    printf("\nLa cantidad de partidos ganados es: %d",(equipo.partidos_ganados));
    printf("\nLa cantidad de partidos perdidos es: %d",(equipo.partidos_perdidos));
    printf("\nLa cantidad de partidos empatados es: %d",(equipo.partidos_empatados));
    printf("\nLa cantidad de goles a favor es: %d",(equipo.goles_a_favor));
    printf("\nLa cantidad de goles en contra es: %d\n\n",(equipo.goles_en_contra));

    return 0;

}
