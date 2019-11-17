//Declaracion de structs

struct punto{

    double x; //double ocupa 8 bytes
    double y;

};

typedef struct punto punto_t;

struct rectangulo{

    punto_t V0;
    punto_t V1;

};

typedef struct rectangulo rectangulo_t; // Con esto hago que el nombre para llamar al struct sea rectangulo.t

struct ByH{             //Struct creado para que la funcion me pueda devolver dos resultados.

    double base;
    double altura;

};

typedef struct ByH ByH_t;

//Prototipos de funcion

ByH_t CalcBaseAltura(rectangulo_t r);

double CalcSuperficie(rectangulo_t r);

double CalcDiagonal(rectangulo_t r);

//Los structs se colocan en el archivo funciones.h para que pueda usarlas en el main y para usarlas en funciones.c tengo que incluir tambien el archivo funciones.h