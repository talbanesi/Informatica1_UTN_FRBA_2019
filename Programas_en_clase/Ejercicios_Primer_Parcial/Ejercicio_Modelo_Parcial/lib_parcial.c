#include "lib_parcial.h"
#include <stdio.h>
#include <time.h>

registro_t* IngresoGuardia(registro_t*p, int*n){

    printf("\n\t--> Ingreso de datos PACIENTE %d <--",(*n));

    printf("\n\nIngrese el codigo del paciente: ");
    scanf("%d",&((p+(*n)) -> codigo));
    setbuf(stdin, NULL);
    printf("\nIngrese el nombre del paciente: ");
    scanf("%[^\n]s",(p+(*n)) -> nombre);
    setbuf(stdin, NULL);
    printf("\nIngrese el apellido del paciente: ");
    scanf("%[^\n]s",(p+(*n)) -> apellido);
    setbuf(stdin, NULL);
    printf("\nIngrese la fecha del ingreso del paciente:\n");
    printf("\n\tDia: ");
    scanf("%d",&((p+(*n)) -> fechaVisita.dia));
    printf("\tMes: ");
    scanf("%d",&((p+(*n)) -> fechaVisita.mes));
    printf("\tAnio: ");
    scanf("%d",&((p+(*n)) -> fechaVisita.anio));
    printf("\nIngrese el tiempo de espera del paciente (en horas): ");
    scanf("%f",&((p+(*n)) -> tiempoEspera));

    (*n)++;

    return p+(*n);

}

void TiempoEspera(registro_t *p, int ultimos_ingresos){

    int tiempoEspera1 = 0;
    int tiempoEspera2 = 0;
    int tiempoEspera3 = 0;
    int tiempoEspera4 = 0;
    float promedio = 0;
    float suma = 0;

    for(int i=0; i<ultimos_ingresos;i++){

        if((((p+i)->tiempoEspera)>=0.5) && (((p+i)->tiempoEspera)<=1)){
            tiempoEspera1++;
        }

        if((((p+i)->tiempoEspera)>=1) && (((p+i)->tiempoEspera)<=2)){
            tiempoEspera2++;
        }

        if((((p+i)->tiempoEspera)>=2) && (((p+i)->tiempoEspera)<=3)){
            tiempoEspera3++;
        }

        if((((p+i)->tiempoEspera)>=3)){
            tiempoEspera4++;
        }

        suma = ((p+i)->tiempoEspera) + suma;

    }

    promedio = suma / ultimos_ingresos;

    printf("\nLa cantidad de pacientes que esperaron mas de 30 minutos son: %d",tiempoEspera1);
    printf("\nLa cantidad de pacientes que esperaron mas de 1 hora son: %d",tiempoEspera2);
    printf("\nLa cantidad de pacientes que esperaron mas de 2 horas son: %d",tiempoEspera3);
    printf("\nLa cantidad de pacientes que esperaron mas de 3 horas son: %d",tiempoEspera4);

    printf("\nEl promedio general de espera de los pacientes es: %f horas\n\n",promedio);

}


int PacienteMayorDemora (registro_t*p, int ultimos_ingresos){

    float tiempo_aux = 0;
    int indice_tiempo;

    for(int i=0; i<ultimos_ingresos;i++){

        if(((p+i)->tiempoEspera)>=tiempo_aux){
            tiempo_aux = ((p+i)->tiempoEspera);
            indice_tiempo = i;
        }

    }

    printf("\t --> DATOS DEL PACIENTE CON MAYOR DEMORA <--\n");
    printf("\nCodigo del paciente: %d",((p+indice_tiempo) -> codigo));
    printf("\n\nNombre del paciente: %s",((p+indice_tiempo) -> nombre));
    printf("\n\nApellido del paciente: %s",((p+indice_tiempo) -> apellido));
    printf("\n\nFecha de ingreso del paciente:");
    printf("\n\n\tDia de ingreso del paciente: %d",((p+indice_tiempo) -> fechaVisita.dia));
    printf("\n\tMes de ingreso del paciente: %d",((p+indice_tiempo) -> fechaVisita.mes));
    printf("\n\tAnio de ingreso del paciente: %d",((p+indice_tiempo) -> fechaVisita.anio));
    printf("\n\nTiempo de espera del paciente: %f\n\n",((p+indice_tiempo) -> tiempoEspera));

    return indice_tiempo;

}


void IngresosMesActual (registro_t*p, int ultimos_ingresos){

    printf("\n\t --> PACIENTES INGRESADOS ESTE MES <--\n\n");

    time_t myTime;

    myTime = time(NULL);
    struct tm*hoy = localtime(&myTime);
    int mesActual = hoy->tm_mon+1;
    int anioActual = hoy->tm_year+1900;

    printf("\nMes actual:%d - Año actual:%d\n\n",  mesActual,  anioActual);

    int i;

    for(i=0;i<ultimos_ingresos;i++){

        if((((p+i) -> fechaVisita.mes) == mesActual) && (((p+i) -> fechaVisita.anio) == anioActual)){

            printf("\n\t-Codigo: %d",(p+i) -> codigo);
            printf("\n\tNombre: %s",(p+i) -> nombre);
            printf("\n\tApellido: %s",(p+i) -> apellido);
            printf("\n");

        }

    }

    printf("\n");

}
