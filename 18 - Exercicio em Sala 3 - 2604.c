/******************************************************************************

Gustavo Zandona Ghiotti

26/04/2023

Exercicio 3
Qual a saída do seguinte código ?

*******************************************************************************/

#include <stdio.h>
void troca ( int a, int b, int c) {
    int temp;
    temp= a;
    a = b;
    b = c;
    c = temp;
}

int main ( ) {
    int a = 5, b=2, c=3;
    troca (a,b,c);
    printf ("a=%d   b=%d  c=%d", a,b,c);
}
