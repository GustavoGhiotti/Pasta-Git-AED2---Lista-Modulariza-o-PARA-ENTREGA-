/******************************************************************************

Gustavo Zandona Ghiotti

26/04/2023

Exercicio 2
Qual ser� o valor produzido pela execu��o do seguinte c�digo ?

*******************************************************************************/

#include <stdio.h>
void funcaoExemplo ( int *a) {
    *a = (*a) * 2;
}

int main ( ) {
    int a = 5, resultado;
    funcaoExemplo (&a);
    printf ("a = %d", a);
}
