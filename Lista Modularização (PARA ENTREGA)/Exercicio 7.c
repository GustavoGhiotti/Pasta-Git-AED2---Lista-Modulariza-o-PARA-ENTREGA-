/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 7

Escreva uma funcão que retorne o cubo do valor passado como argumento. 
******************************************************************************/

#include <stdio.h>

int cubo(int numero) {
    return (numero * numero * numero);
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    
    int resultado = cubo(numero);
    printf("O cubo de %d é %d\n", numero, resultado);
    
    return 0;
}
