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
*  Descripcion: Esta funcion permite calcular el factorial de un numero.
*  Formato de llamada: factorial_fun()
*  Argumentos: int num, int num2, int resultado
*  Retorno: resultado
*  Observaciones:
*
**/

#include <stdio.h>

long factorial_func (int num, int num2, int resultado) {
    

    
    if(num<0) {
        do { 
            printf("La operación no es posible con el número ingresado \n"); 
            printf("Ingrese otro número: "); 
            scanf("%d", &num); 
        }while(num<0); 
    }
    if(num>0) {
    do {
        num2=num2+1; 
        resultado=num2*resultado; 
        
    }while(num2<num); 
    
    }
    

    else if (num==0) {
    }
    
    return resultado; 
    

}
