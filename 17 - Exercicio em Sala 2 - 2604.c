/******************************************************************************

Gustavo Zandona Ghiotti

26/04/2023

Exercicio 2
Qual será o valor produzido pela execução do seguinte código ?

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
