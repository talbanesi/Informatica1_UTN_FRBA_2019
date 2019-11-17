typedef struct{

    int cantidad_notas;
    int notas[5];
    float promedio;

} alumnosDatos_t;

void AgregarExtension(char *argumento, int tam);

alumnosDatos_t DatosAlumnos(char *nombre_alumno);

void ImprimirNotas(alumnosDatos_t alumno);
