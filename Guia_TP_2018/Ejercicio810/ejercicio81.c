#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "funciones.h"

//No se puede restar ni sumar structs.

int main(void){

    rectangulo_t r1; //Declaro una variable r1 que tiene la estructura de rectangulo
    ByH_t bhresult;
    double superficie;
    double diagonal;

    printf("\n\nIngrese la coordenada de X del primer punto: ");
    scanf("%lf",&r1.V0.x);
    printf("\n\nIngrese la coordenada de Y del primer punto: ");
    scanf("%lf",&r1.V0.y);
    printf("\n\nIngrese la coordenada de X del segundo punto: ");
    scanf("%lf",&r1.V1.x);
    printf("\n\nIngrese la coordenada de Y del segundo punto: ");
    scanf("%lf",&r1.V1.y);

    bhresult = CalcBaseAltura(r1);

    printf("\n--> La base del rectangulo formado es: %f",bhresult.base);
    printf("\n--> La base del rectangulo formado es: %f\n\n",bhresult.altura);

    superficie = CalcSuperficie(r1);

    printf("--> La superficie del rectangulo formado es: %f\n\n",superficie);

    diagonal = CalcDiagonal(r1);

    printf("--> La diagonal del rectangulo formado es: %f\n\n",diagonal);

    return 0;

}


       