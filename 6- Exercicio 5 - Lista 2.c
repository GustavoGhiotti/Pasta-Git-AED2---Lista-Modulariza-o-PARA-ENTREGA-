/******************************************************************************

Gustavo Zandona Ghiotti 

01/03/2023

Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os
valores lidos na ordem inversa.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>


int main() {

    int i, opcao, vetor[6];

    for(i = 0; i < 6; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

            for(i = 5; i >= 0; i--){
                printf("%d", vetor[i]);
            }

    return 0;
            
}


