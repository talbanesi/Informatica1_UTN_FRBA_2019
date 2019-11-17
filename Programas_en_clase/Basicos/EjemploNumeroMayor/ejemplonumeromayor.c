#include<stdio.h>

int main(void){

	int numero1, numero2, numero3;

	printf("Ingrese el primer numero: ");
	scanf("%d",&numero1);
	printf("Ingrese el segundo numero: ");
	scanf("%d",&numero2);
	printf("Ingrese el tercer numero: ");
	scanf("%d",&numero3);

	if(numero1>numero2){
		
		if(numero1>numero3){

			printf("\nEl mayor es el primer numero: %d",numero1);

		}else{

			printf("\nEl mayor es el tercer numero: %d",numero3);

		}

	}else{

		if(numero2>numero3){

			printf("\nEl mayor es el segundo numero: %d",numero2);

		}else{

			printf("\nEl mayor es el tercer numero: %d",numero3);

		}

	}

	printf("\n\n --- AUTOR: ALBANESI, TOMAS AGUSTIN --- \n\n");

	return 0;	

}
	

