#include <stdio.h>

struct datos{

    float promedio;
    int cant;

};

typedef strcut datos datos_t;

int main(int argc, char *argv[]){

    char *nArch;
    FILE *fp;
    char linea[10];
    int cont_datos = 0;
    float *buf;
    char *p;
    float prom_notas;
    datos_t d;

    nArch = malloc(strlen(argv[1])+4); //Resevo memoria para el nombre y el .dat, para el nombre del archivo

    strcpy(nArcha, argv[1]);
    strcat(nArch,".dat");   //Estas dos funciones pueden ser reemplzadas por: sprintf(nArch,"%s.dat",argv[1])

    fp = fopen(nArch;"r");

    while(fgets(linea,10,fp)!=NULL){

        cant_datos++;

    }

    buf = (float*) malloc(sizeof(float)*cont);

    fseek(fp,0,SEEK_SET); //rewind(fp)

    d.cant = cont;

    for(int i=0; i<cant_datos; i++){

        p  = fgets(linea, 10, fp);
        buf[i] = atof(linea);

    }

    prom_notas = Promedio(buf);





}
