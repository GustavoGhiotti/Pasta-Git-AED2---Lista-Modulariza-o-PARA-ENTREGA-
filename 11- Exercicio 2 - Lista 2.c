/******************************************************************************
Gustavo Zandona Ghiotti

08/03/2023

EXERCÍCIO 2

Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu
programa deverá escrever a soma dos valores encontrados nas respectivas posições
X e Y.

*******************************************************************************/

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor da primeira posição: \n");
    scanf("%d", &x);
    while(x < 0 || x >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &x);
    }
    printf("Digite o valor da segunda posição: \n");
    scanf("%d", &y);
    while(y < 0 || y >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &y);
    }
    
    soma = v[x] + v[y];
    printf("A soma dos dois valores é: %d", soma);
}




