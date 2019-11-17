#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void main(void){

    char lista[8192];
    int i,j,idx;
    int contadores[26];

    for(i=0;i<8192;i++){

        printf("\nIngrese el caracter %d: ",i);
        setbuf(stdin,NULL);
        scanf("%c",&lista[i]);
        setbuf(stdin,NULL);

    }

    for(i=0;i<26;i++){

        contadores[i] = 0;

    }



    for(i=0;i<8192;i++){

        if(isalpha(lista[i])){

            idx = toupper(lista[i]-'A');
            contadores[idx]++;

        }

    }

    for(i=0;i<26;i++){

        printf("%c: %d\n",'A'+i,contadores[i]);

    }

    }
