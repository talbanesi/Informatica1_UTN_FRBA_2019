#include <stdio.h>
#include <stdlib.h>
#include "lib_parcial.h"

#define tam 5

void main(void){

    registro_t vector[tam];
    registro_t *p = vector; //vector == &vector[0]
    int indice_array;

    int ultimos_ingresos = 0;

    int *n = &ultimos_ingresos;

    for(int i=0;i<tam;i++){

        IngresoGuardia(p,n);

    }

    TiempoEspera(p,ultimos_ingresos);

    indice_array = PacienteMayorDemora(p,ultimos_ingresos);

    IngresosMesActual(p,ultimos_ingresos);

    PromediosMensuales(p, ultimos_ingresos);


}
