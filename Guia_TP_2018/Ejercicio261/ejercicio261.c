/**
*
*  Infomática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos: 	Albanesi, Tomas Agustin
						Gonzalez Perez, Jose
						Mella, Camila
						Alvarez, Gerson
						Magallanes, Claudio	
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.6.1 - Ejercicio 1
*  Enunciado del ejercicio: Fuiste seleccionado para desarrollar el sistema de premios para el programa de televisión “Yo se cuanto
cuesta”. En el mismo, se muestra un carrito de supermercado lleno de productos y los participantes deben
arriesgar el valor del total de los productos que se encuentran en él. El que acierta o está mas cerca de ese
valor, gana.
El sistema deberá permitir el ingreso del valor del carrito, verificar que el valor ingresado sea mayor que 0,
y solicitar nuevamente el ingreso en caso de no cumplirse esta condición. Si se superan los tres ingresos
fallidos consecutivos, terminará con el mensaje correspondiente al usuario por la salida de error standard.
Luego solicitará el ingreso del importe declarado por cada participante (cada participante será identificado
con el número de orden de carga en el sistema, o sea, 1, 2, 3, etc).
La carga de los participantes finaliza con el ingreso de un importe igual o menor que 0.
Una vez finalizada la carga, deberá mostrar por la salida estándar cuantos participantes arriesgaron valores
mayores al 15% del valor del carrito, cuántos participantes arriesgaron valores menores al 1% del valor del
carrito y quien fue el participante que estuvo más cerca del valor.
*  Observaciones: gcc -o ejercicio261 ejercicio261.c -lm
*
**/

#include <stdio.h>
#include <math.h>

int main (void) {
    
    float carrito, arriesga, resta, resta_ant, cercano; 
    int cont, jugador, condicion, condicion2;  
    cont=0; 
    jugador=0; 
    condicion=0; 
    condicion2=0; 
    resta=0; 

    printf("\n - GUIA TP 2018 - EJERCICIO 2.6.1 - \n");
    
    printf("Ingrese el valor real del carrito: "); 
    scanf("%f", &carrito); 
    
    if(carrito<=0) {
        do {
            printf("El número ingresado no es válido \n"); 
            printf("Ingrese otro número: "); 
            scanf("%f", &carrito); 
            cont=cont+1; 
        }while(cont<2 && carrito<=0); 
    }
        
    if(cont==2 && carrito<=0) {
        perror("Error"); 
        }
        
    if(cont<=2 && carrito>0) {
        do {
            printf("¿Cuál es el valor del carrito? "); 
            scanf("%f", &arriesga); 
            jugador=jugador+1; 
            
            if(arriesga>0.15*carrito) {
                condicion=condicion+1; 
            }
            if(arriesga<0.01*carrito && arriesga>0) {
                condicion2=condicion2+1; 
            }
            resta_ant=resta; 
            resta= fabs(carrito-arriesga); 
            
            if(resta<resta_ant) {
                cercano=arriesga; 
            }
            
           
        }while(arriesga>0); 
        
        printf("Valores mayores al 15 porciento del valor del carrito: %d\n", condicion); 
        
        printf("Valores menores al 1 porciento del valor del carrito: %d\n", condicion2);
        
        printf("El valor más cercano al valor real del carrito es: %f\n", cercano); 
    }

    printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");
    
}
