/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 1

Escreva um programa que implemente uma funcão que retorne a diferenca entre 
dois números inteiros digitados pelo usuário.  
******************************************************************************/
#include <stdio.h>

int main() {
    int  valor1, valor2, resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &valor2);
    
    resultado = valor1 - valor2;
    
    printf("A diferença entre %d e %d é %d", valor1, valor2, resultado);
    
    return 0;
}

