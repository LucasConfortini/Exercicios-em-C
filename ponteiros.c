/*
#include <stdio.h>

int main(){
    int x = 5, y = 6;
    int *px = &x, *py = &y;

    printf(" x = %d\n", x);
    printf("&x = %p\n\n", &x);

    printf("*px = %d\n", *px);
    printf(" px = %p\n", px);
    printf("&px = %p\n\n", &px);

    printf(" y = %d\n", y);
    printf("&y = %p\n\n", &y);

    printf("*py = %d\n", *py);
    printf(" py = %p\n", py);
    printf("&py = %p\n\n", &py);

    x = 10;
    printf("x = %d ->", x);
    printf("Alterei o valor de x para %d e o *px passou para %d\n\n", x, *px);

    *px = 20;
    printf("*px = %d ->", *px);
    printf("Alterei o valor do *px para %d e x passou para %d\n\n", *px, x);

    x++;
    printf("x++ --> ");
    printf("x = %d", x);
    printf(" e *px = %d\n\n", *px);

    (*px)++;
    printf("(*px)++ --> ");
    printf("*px = %d", *px);
    printf(" e x = %d", x);
    printf(" e px = %p\n\n", px);

    *px++;
    printf("*px++ --> ");
    printf("*px = %d", *px);
    printf(" e x = %d", x);
    printf(" mas px = %p\n\n", px); //Cuidado com a precedencia de operadores.

    px++;
    printf("px++ --> ");
    printf("*px = %d", *px);
    printf(" e x = %d", x);
    printf(" mas px = %p\n\n", px); //Cuidado com a precedencia de operadores.

    return (0);
}
*/
