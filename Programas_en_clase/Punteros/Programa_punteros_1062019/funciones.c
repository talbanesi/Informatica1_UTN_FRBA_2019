#include<stdlib.h>

float calc_promedio(int array[], int L){

    float prom = 0;
    float num_elementos = L;
    int i;
    float result;

    for(i=0;i<L;i++){
        prom = prom + array[i];
    }
    
    return (prom/num_elementos);

}

int mayor_promedio(int array[], int L){

    int cont = 0, j;
    float prom;

    prom = calc_promedio(array, L);

    for(j=0;j<L;j++){
        if(array[j]>prom){
            cont++;
        }
    }

    return cont;

}

int maximo_desvio(int array[],int L){

    float prom;
    float num;
    float num_final;
    int num_mostrar;
    float result_num;

    prom = calc_promedio(array, L);
    
    int i;

    num_final=0;

    for(i=0;i<L;i++){

        num = prom - array[i];
        result_num = abs(num);
        if(result_num > num_final){
            num_mostrar = array[i];
            num_final = result_num;
        }else{
            num_mostrar = array[i];
        }

    }

    return num_mostrar;

}
      
            

















        
