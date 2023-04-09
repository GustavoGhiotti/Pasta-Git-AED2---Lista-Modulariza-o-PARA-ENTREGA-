/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 6

Escreva um programa que implemente uma funcão que passe dado número inteiro 
como parametro, e este desenhe um número equivalente a “*” na tela.   
******************************************************************************/
#include <stdio.h>

void Asteriscos(int numero) {
    int contador = 0;
    while (contador < numero) {
        printf("*");
        contador++;
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    Asteriscos(numero);
    return 0;
}


