/******************************************************************************
 * Exercicio 3 

Gustavo Zandona Ghiotti

Leia um vetor de 10 posições
conte e escreva quantos valors pares ele possui.

*******************************************************************************/
#include <stdio.h>

int main(){

    int valores[10], i , numPar = 0;
    
    printf ("Digite 10 valores inteiros : \n") ;
        for (i =0 ; i < 10 ; i++){
            scanf ("%d", &valores[i]);
        }
    
    for (i = 0; i < 10; i++){
        if (valores [i] % 2 == 0){
            numPar++;
        }
    }
    
    printf ("\nExistem: %d numeros pares", numPar);
 
    return 0;
}


