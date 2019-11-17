#include "funciones.h"
#include <math.h>

ByH_t CalcBaseAltura(rectangulo_t r){

    double base;
    double altura;

    base = fabs(r.V1.x - r.V0.x);
    altura = fabs(r.V1.y - r.V0.y);

    ByH_t ByH;

    ByH.base = base;
    ByH.altura = altura;

    return ByH;

}

double CalcSuperficie(rectangulo_t r){

    ByH_t ByH;

    double superficie;

    ByH = CalcBaseAltura(r);

    superficie = ByH.base * ByH.altura;

    return superficie;

}

double CalcDiagonal(rectangulo_t r){

    double diagonal;

    ByH_t ByH;

    ByH = CalcBaseAltura(r);

    diagonal = sqrt(pow(ByH.base,2) + pow(ByH.altura,2));

    return diagonal;

}

double CalcCamino(punto_t camino, int i){

    

}