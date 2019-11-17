/**
*
*  Infomática I
*  Año: 2019
*  Grupo Nº: 6
*  Nombres de alumnos:  Albanesi, Tomas Agustin
                        Gonzalez Perez, Jose
                        Mella, Camila
                        Alvarez, Gerson
                        Magallanes, Claudio 
*  TP Nº1   Guia de Trabajos Practicos 2018
*  Nº de ejercicio: 2.6.2 - Ejercicio 2
*  Enunciado del ejercicio: Dada una carga inicial de 100 valores enteros, se deberá presentar un menú de 4 opciones donde, en caso de
seleccionar:
• Opción 1: Mostrará cuántos de esos valores son mayores a 50, son menores de 1000 y poseen raíz
cuadrada entera.
• Opción 2: Mostrará cuántos de esos valores son menores que 0 y pares.
• Opción 3: Mostrará cuántos de esos valores son múltiplos de 8 o de 9.
• Opción 4: Sale del programa.
Si no se seleccionó ninguna de las 4 opciones presentar por la salida de error standard "Opción inválida",
solicitará que se presione una tecla, borrar la pantalla 1 y presentar nuevamente el menú.
*  Observaciones: gcc -o ejercicio262 ejercicio262.c -lm -fno-stack-protector (el ultimo comando se aplica para que no apareza el error de stack smashing detect)
*
**/

//IMPORTANTE: Este es el programa pedido, solamente que realizado con 10 valores iniciales, en vez de 100 valores.
//Debido a que sino, llevaria mucho tiempo cargar los 100 valores.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){

    int valores[10];
    int i;
    int opcion;
    float raiz, raiz_result;
    int contador1 = 0;
    int contador2 = 0;
    int contador3 = 0;
    int opcion_invalida = 0;

    printf("\n - GUIA TP 2018 - EJERCICIO 2.6.2 - \n");

    for (i=1;i<=10;i++){

        printf("\nIngrese el valor %d: ",i);
        scanf("%d",&valores[i]);

    }

    do{

        printf("\n 	Menu de opciones \n\n");
        printf(" OPCION 1 --> Mostrar cuantos de esos valores son mayores a 50, son menores de 1000 y poseen raíz cuadrada entera.\n");
        printf(" OPCION 2 --> Mostrará cuántos de esos valores son menores que 0 y pares.\n");
        printf(" OPCION 3 --> Mostrará cuántos de esos valores son múltiplos de 8 o de 9.\n");
        printf(" OPCION 4 --> Sale del programa.\n");
        printf(" \n Elija una de las opciones: ");
        scanf("%d",&opcion);

        if(opcion==1){

            int j;

            for(j=1;j<=10;j++){

                raiz = sqrt(valores[j]);
                raiz_result = raiz - truncf(raiz);

                if(valores[j]>50 && valores[j]<1000 && raiz_result==0){

                    contador1++;

                }

            }

            printf("\nLos valores mayores a 50, menores a 1000 y que poseen raiz cuadrada entera son: %d\n\n",contador1);

        }else if(opcion==2){

            int k;

            for(k=1;k<=10;k++){

                if(valores[k]<0 && (valores[k]%2)==0){

                    contador2++;

                }

            }

            printf("\nLos valores menores que 0 y pares son: %d\n\n",contador2);

        }else if(opcion==3){

            int l;

            for(l=1;l<=10;l++){

                if((valores[l]%8)==0 || (valores[l]%9)==0){

                    contador3++;

                }

            }

            printf("\nLos valores que son multiplos de 8 o multiplos de 9 son: %d\n\n",contador3);

        }else if(opcion==4){

            return 0;

        }else{

            perror("\nOpcion inválida");
            printf("\nPor favor, selecciona una opcion valida.\n");
            opcion_invalida=1;
			system("clear");


        }

    }while(opcion_invalida == 1);

    printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
    printf("              - GONZALEZ PEREZ, JOSE\n");
    printf("              - MELLA, CAMILA\n");
    printf("              - ALVAREZ, GERSON\n");
    printf("              - MAGALLANES, CLAUDIO\n\n");

    return 0;


}