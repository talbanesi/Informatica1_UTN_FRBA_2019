#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "funciones_2a.h"

void AgregarExtension(char *argumento, int tam){

    char *argumento_con_ext;

    argumento = realloc(argumento,sizeof(char)*(tam+1+4)); //Reservo el espacio para el string mas el /0 mas el .dat

    strcat(argumento,".dat");

}