#include<stdio.h>

void main(void){

    int a, b;
    printf("\n\nIngrese un numero: ");
    scanf("%d",&a);
    printf("\nIngrese otro numero: ");
    scanf("%d",&b);
    printf("\nEl contenido de a es: %d",a);
    printf("\nEl contenido de b es: %d",b);

    int *p, *q;
    p = &a;
    q = &b;
    printf("\nEl contenido de p es: %p",p);
    printf("\nEl contenido de q es: %p",q);
    printf("\nEl contenido de lo apuntado por p es: %d",*p);
    printf("\nEl contenido de lo apuntado por q es: %d",*q);

    

    printf("\n\n");

}