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
*  Nº de ejercicio: 2.3.1 - Ejercicio 5
*  Enunciado del ejercicio: Modificar el programa anterior para que en el caso de ser un triángulo, luego de indicar que tipo de triángulo
es, informe a través de la salida estándar si además el triángulo es rectángulo.
*  Observaciones: gcc -o ejercicio231 ejercicio231.c -lm
*
**/

#include<stdio.h>
#include<math.h>

int main(void){

	int lado1,lado2,lado3;
    int ladomayor,cateto1,cateto2;    
	
	printf("\n - GUIA TP 2018 - EJERCICIO 2.3.1 - \n\n");

	printf("Ingrese el primer lado del triangulo: ");
	scanf("%d",&lado1);
	printf("Ingrese el segundo lado del triangulo: ");
	scanf("%d",&lado2);
	printf("Ingrese el tercer lado del triangulo: ");
	scanf("%d",&lado3);

    if(lado1>lado2){

        if(lado1>lado3){
            
            ladomayor=lado1;
            cateto1=lado2;
            cateto2=lado3;

        }else{

            ladomayor=lado3;
            cateto1=lado1;
            cateto2=lado2;

        }

    }else{

        if(lado2>lado3){
            
            ladomayor=lado2;
            cateto1=lado1;
            cateto2=lado3;

        }else{

            ladomayor=lado3;
            cateto1=lado1;
            cateto2=lado2;

        } 

    }  

	if(lado1>0 && lado2>0 && lado3>0){

		if(lado1+lado2>lado3 && lado2+lado3>lado1 && lado3+lado1>lado2){

				if(lado1==lado2){

					if(lado2==lado3){

						printf("\nEl triangulo es equilatero.");

						if(pow(ladomayor,2)==pow(cateto1,2)+pow(cateto2,2))printf("\nAdemas, es un TRIANGULO RECTANGULO");

					}else if(lado2!=lado3){

						printf("\nEl triangulo es isoceles.");
						if(pow(ladomayor,2)==pow(cateto1,2)+pow(cateto2,2))printf("\nAdemas, es un TRIANGULO RECTANGULO");
				
					}

				}else if(lado2!=lado3){
					
					printf("\nEl triangulo es escaleno.");
					if(pow(ladomayor,2)==pow(cateto1,2)+pow(cateto2,2))printf("\nAdemas, es un TRIANGULO RECTANGULO");

				}else{

					printf("\nEl triangulo es isoceles.");
					if(pow(ladomayor,2)==pow(cateto1,2)+pow(cateto2,2))printf("\nAdemas, es un TRIANGULO RECTANGULO");

				}

			

		}else{

			perror("\nERROR: Los valores de los lados ingresados no conforman un triangulo");

		}
		
	}else if(lado1<=0 || lado2<=0 || lado3<=0)perror("\nERROR: Carece de sentido que el lado sea negativo o nulo");
	
	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

	return 0;	
	
}
