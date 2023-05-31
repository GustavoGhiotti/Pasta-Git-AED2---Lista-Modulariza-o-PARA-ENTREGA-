/******************************************************************************

Gustavo Zandona Ghiotti

26/04/2023

Exercicio 1
Analise o código abaixo e informe sua saída.

*******************************************************************************/

#include <stdio.h>

int funcaoExemplo ( int a) {
    a = (a) * 2;
    return a;
}
int main ( ) {
    int a = 5, resultado;
    funcaoExemplo (a);
    printf ("a = %d", a);
}
