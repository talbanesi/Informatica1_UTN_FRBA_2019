/**
*
*  Informática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos: 	Albanesi, Tomas Agustin
						Gonzalez Perez, Jose
						Mella, Camila
						Alvarez, Gerson
						Magallanes, Claudio
*  Descripcion: 
*  Formato de llamada: 
*  Argumentos: 
*  Retorno: 
*  Observaciones:
*
**/

int my_strlen(char *string){

    int cant_caracteres=0;

    while(*string!='\0'){

        cant_caracteres++;
        string+=1;

    }

    return cant_caracteres;

}

