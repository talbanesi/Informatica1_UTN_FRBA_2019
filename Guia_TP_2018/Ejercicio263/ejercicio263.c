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
*  Nº de ejercicio: 2.6.3 - Ejercicio 3
*  Enunciado del ejercicio: 
Una compañía de seguros está realizando un relevamiento de las pólizas que tiene emitidas y nos piden
realizar un programa que brinde las siguientes estadísticas:
• Cantidad de dominios que posean más de 10 años de antigüedad o más de 100.000 kmts.
• Cantidad de dominios que posean una póliza con más de 5 años de fidelidad a la compañía y menos de
3 siniestros.
• Cuál es el mayor kilometraje que posee un dominio.
• Cuál es el promedio de kilómetros por año del total de dominios.
Para esto, se realizará la carga de 100 pólizas. Por cada póliza se deberán cargar los siguientes 4 datos:
• Año de la primer póliza para ese dominio.
• Año del dominio.
• Cantidad de kilómetros
• Cantidad de siniestros.
El dominio es la patente del automóvil.
*  Observaciones: gcc -o ejercicio263 ejercicio263.c
*
**/

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int cont_pol_sin,cont_dom_km;
	int fecha_act;
	int dominio1,dominio2,dominio3,dominio4,dominio5;
	int fecha_primera_poliza1,fecha_primera_poliza2,fecha_primera_poliza3,fecha_primera_poliza4,fecha_primera_poliza5;
	int fecha_dominio1,fecha_dominio2,fecha_dominio3,fecha_dominio4,fecha_dominio5;
	int cant_km1,cant_km2,cant_km3,cant_km4,cant_km5;
	int cant_sin1,cant_sin2,cant_sin3,cant_sin4,cant_sin5;
	int res1,res2,res3,res4,res5;
	int fechatotal,kmtotal,promedio;
	cont_dom_km=0;
	cont_pol_sin=0;
	fecha_act=2019;
	system("clear");
	printf("Inserte la patente o dominio del auto n°1: \n");
	scanf("%d",&dominio1);
	setbuf(stdin,NULL);
	printf("Inserte el año de la primera poliza del dominio n°1: \n");
	scanf("%d",&fecha_primera_poliza1);
	setbuf(stdin,NULL);
	printf("Inserte el año del dominio n°1: \n");
	scanf("%d",&fecha_dominio1);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de kilometros del vehiculo n°1: \n");
	scanf("%d",&cant_km1);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de siniestros que ha sufrido del vehuiculo n°1: \n");
	scanf("%d",&cant_sin1);
	setbuf(stdin,NULL);
	printf("Inserte la patente o dominio del auto n°2: \n");
	scanf("%d",&dominio2);
	setbuf(stdin,NULL);
	printf("Inserte el año de la primera poliza del dominio n°2: \n");
	scanf("%d",&fecha_primera_poliza2);
	setbuf(stdin,NULL);
	printf("Inserte el año del dominio n°2: \n");
	scanf("%d",&fecha_dominio2);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de kilometros del vehiculo n°2: \n");
	scanf("%d",&cant_km2);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de siniestros que ha sufrido del vehuiculo n°2: \n");
	scanf("%d",&cant_sin2);
	setbuf(stdin,NULL);
	printf("Inserte la patente o dominio del auto n°3: \n");
	scanf("%d",&dominio3);
	setbuf(stdin,NULL);
	printf("Inserte el año de la primera poliza del dominio n°3: \n");
	scanf("%d",&fecha_primera_poliza3);
	setbuf(stdin,NULL);
	printf("Inserte el año del dominio n°3: \n");
	scanf("%d",&fecha_dominio3);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de kilometros del vehiculo n°3: \n");
	scanf("%d",&cant_km3);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de siniestros que ha sufrido del vehuiculo n°3: \n");
	scanf("%d",&cant_sin3);
	setbuf(stdin,NULL);
	printf("Inserte la patente o dominio del auto n°4: \n");
	scanf("%d",&dominio4);
	setbuf(stdin,NULL);
	printf("Inserte el año de la primera poliza del dominio n°4: \n");
	scanf("%d",&fecha_primera_poliza4);
	setbuf(stdin,NULL);
	printf("Inserte el año del dominio n°4: \n");
	scanf("%d",&fecha_dominio4);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de kilometros del vehiculo n°4: \n");
	scanf("%d",&cant_km4);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de siniestros que ha sufrido del vehuiculo n°4: \n");
	scanf("%d",&cant_sin4);
	setbuf(stdin,NULL);
	printf("Inserte la patente o dominio del auto n°5: \n");
	scanf("%d",&dominio5);
	setbuf(stdin,NULL);
	printf("Inserte el año de la primera poliza del dominio n°5: \n");
	scanf("%d",&fecha_primera_poliza5);
	setbuf(stdin,NULL);
	printf("Inserte el año del dominio n°5: \n");
	scanf("%d",&fecha_dominio5);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de kilometros del vehiculo n°5: \n");
	scanf("%d",&cant_km5);
	setbuf(stdin,NULL);
	printf("Inserte la cantidad de siniestros que ha sufrido del vehuiculo n°5: \n");
	scanf("%d",&cant_sin5);
	setbuf(stdin,NULL);
	if(fecha_dominio1<=fecha_act-10){
		cont_dom_km=cont_dom_km+1;
	} else{
		if(cant_km1>100000){
			cont_dom_km=cont_dom_km+1;
		}
	}		
	if(fecha_dominio2<=fecha_act-10){
		cont_dom_km=cont_dom_km+1;
	} else{
		if(cant_km2>100000){
			cont_dom_km=cont_dom_km+1;
		}
	}
	if(fecha_dominio3<=fecha_act-10){
		cont_dom_km=cont_dom_km+1;
	} else{
		if(cant_km3>100000){
			cont_dom_km=cont_dom_km+1;
		}
	}		
	if(fecha_dominio4<=fecha_act-10){
		cont_dom_km=cont_dom_km+1;
	} else{
		if(cant_km4>100000){
			cont_dom_km=cont_dom_km+1;
		}
	}				
	if(fecha_dominio5<=fecha_act-10){
		cont_dom_km=cont_dom_km+1;
	} else{
		if(cant_km5>100000){
			cont_dom_km=cont_dom_km+1;
		}
	}			
	printf("Cantidad de dominios que poseen mas de 10 años o mas de 100000km: %d\n",cont_dom_km);
	if(fecha_primera_poliza1<fecha_act-5 && cant_sin1<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	if(fecha_primera_poliza2<fecha_act-5 && cant_sin2<3){
		cont_pol_sin=cont_pol_sin+1;
	}	
	if(fecha_primera_poliza3<fecha_act-5 && cant_sin3<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	if(fecha_primera_poliza4<fecha_act-5 && cant_sin4<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	if(fecha_primera_poliza5<fecha_act-5 && cant_sin5<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	printf("Cantidad de dominios con polizas de mas de 5 años de fidelidad y menos de 3 siniestros es: %d\n",cont_pol_sin);
	if (cant_km1>cant_km2 && cant_km1>cant_km3 && cant_km1>cant_km4 && cant_km1>cant_km5){
	printf("El mayor Kilometraje que posee un dominio es: %d\n",cant_km1);
	}
	if (cant_km2>cant_km1 && cant_km2>cant_km3 && cant_km2>cant_km4 && cant_km2>cant_km5){
	printf("El mayor Kilometraje que posee un dominio es: %d\n",cant_km2);
	}
	if (cant_km3>cant_km1 && cant_km3>cant_km2 && cant_km3>cant_km4 && cant_km1>cant_km5){
	printf("El mayor Kilometraje que posee un dominio es: %d\n",cant_km3);
	}
	if (cant_km4>cant_km1 && cant_km4>cant_km2 && cant_km4>cant_km3 && cant_km4>cant_km5){
	printf("El mayor Kilometraje que posee un dominio es: %d\n",cant_km4);		
	}
	if (cant_km5>cant_km1 && cant_km5>cant_km2 && cant_km5>cant_km3 && cant_km5>cant_km4){
	printf("El mayor Kilometraje que posee un dominio es: %d\n",cant_km5);	
	if(fecha_primera_poliza1<fecha_act-5 && cant_sin1<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	if(fecha_primera_poliza2<fecha_act-5 && cant_sin2<3){
		cont_pol_sin=cont_pol_sin+1;
	}	
	if(fecha_primera_poliza3<fecha_act-5 && cant_sin3<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	if(fecha_primera_poliza4<fecha_act-5 && cant_sin4<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	if(fecha_primera_poliza5<fecha_act-5 && cant_sin5<3){
		cont_pol_sin=cont_pol_sin+1;
	}
	printf("Cantidad de dominios con polizas de mas de 5 años de fidelidad y menos de 3 siniestros es: %d\n",cont_pol_sin);
	res1=(fecha_act-fecha_dominio1);
	res2=(fecha_act-fecha_dominio2);
	res3=(fecha_act-fecha_dominio3);
	res4=(fecha_act-fecha_dominio4);
	res5=(fecha_act-fecha_dominio5);
	fechatotal=res1+res2+res3+res4+res5;
	kmtotal=cant_km1+cant_km2+cant_km3+cant_km4+cant_km5;
	promedio=kmtotal/fechatotal;
	printf("El promedio de kilometros por año es igual a: %d\n",promedio);

	printf("\n\n --> AUTORES: - ALBANESI, TOMAS AGUSTIN\n"); //Se muestra por pantalla los nombres de los autores del codigo
	printf("              - GONZALEZ PEREZ, JOSE\n");
	printf("              - MELLA, CAMILA\n");
	printf("              - ALVAREZ, GERSON\n");
	printf("     	      - MAGALLANES, CLAUDIO\n\n");

	return 0;

	}

}
