int reemplazo(char *str1, char *str2, char car){

    int i, cant=0;
    strcpy(str2,str1);
    for(i=0;i<strlen(str2);i++){

        if(str2[i]==car){

            str2[i] = 'x';
            cant++;

        }


    }

    if(cant>0){
        return 1;
    }else{
        return 0;
    }

}
