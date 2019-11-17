int primeraMayus(char *cadena){
	
	if((cadena[0] >= 'a') && (cadena[0] <= 'z')){
		
		cadena[0] = cadena[0] - ('a' - 'A');
		
	}
	
	return 0;
	
}
