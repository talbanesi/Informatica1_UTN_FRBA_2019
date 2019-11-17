#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

#define L 6

int main(void){

    float promedio;
    int mayor;
    int cant;
    int desvio_var;

    int array[L] = {5,12,1,3,4,7};

    promedio = calc_promedio(array,L);

    printf("\nEl promedio es: %f\n\n",promedio);

    cant = mayor_promedio(array, L);

    printf("\nLa cantidad de valores mayores al promedio son: %d valores\n\n",cant);

    desvio_var = maximo_desvio(array, L);

    printf("\nEl maximo desvio es: %d\n\n",desvio_var);

    return 0;

}

