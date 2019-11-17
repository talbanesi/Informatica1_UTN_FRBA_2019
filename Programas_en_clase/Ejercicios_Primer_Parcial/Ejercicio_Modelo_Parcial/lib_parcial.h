#define L 30

struct fecha{

    int dia;
    int mes;
    int anio;

};

typedef struct fecha fecha_t;

struct registro{

    int codigo;
    char nombre[L];
    char apellido[L];
    fecha_t fechaVisita;
    float tiempoEspera;

};

typedef struct registro registro_t;

registro_t* IngresoGuardia(registro_t*p,int*n);

void TiempoEspera(registro_t *p, int ultimos_ingresos);

int PacienteMayorDemora (registro_t*p, int ultimos_ingresos);

void IngresosMesActual (registro_t*p, int ultimos_ingresos);

void PromediosMensuales (registro_t*p, int ultimos_ingresos);
