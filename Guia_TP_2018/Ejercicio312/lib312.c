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
*  Descripcion: Esta funcion realizar conversiones entre las unidades de temperatura Celsius, Kelvin, Fahrenheit y Rankine.
*  Formato de llamada: conversion_temp()
*  Argumentos: float temp_valor, char unidad_temp_origen, char unidad_temp_destino
*  Retorno: temp_result
*  Observaciones:
*
**/


float conversion_temp (float temp_valor, int unidad_temp_origen, int unidad_temp_destino){

    float temp_result;

    if(unidad_temp_origen==1 && unidad_temp_destino==2){
        temp_result = ((temp_valor - 32) / 1.8);
    }else if(unidad_temp_origen==2 && unidad_temp_destino==1){
        temp_result = (temp_valor * 1.8) + 32;
    }else if(unidad_temp_origen==1 && unidad_temp_destino==3){
        temp_result = ((temp_valor + 459.67) / 1.8);
    }else if(unidad_temp_origen==3 && unidad_temp_destino==1){
        temp_result = (temp_valor * 1.8) - 459.67;
    }else if(unidad_temp_origen==1 && unidad_temp_destino==4){
        temp_result = temp_valor + 459.67;
    }else if(unidad_temp_origen==4 && unidad_temp_destino==1){
        temp_result = temp_valor - 459.67;
    }else if(unidad_temp_origen==2 && unidad_temp_destino==3){
        temp_result = temp_valor + 273.15;
    }else if(unidad_temp_origen==3 && unidad_temp_destino==2){
        temp_result = temp_valor - 273.15;
    }else if(unidad_temp_origen==2 && unidad_temp_destino==4){
        temp_result = ((temp_valor + 273.15) * 9) / 5;
    }else if(unidad_temp_origen==4 && unidad_temp_destino==2){
        temp_result = ((temp_valor - 491.67) * 5) / 9;
    }else if(unidad_temp_origen==3 && unidad_temp_destino==4){
        temp_result = (temp_valor * 9) / 5;
    }else if(unidad_temp_origen==4 && unidad_temp_destino==3){
        temp_result = (temp_valor * 5) / 9;
    }

        return temp_result;    

}


