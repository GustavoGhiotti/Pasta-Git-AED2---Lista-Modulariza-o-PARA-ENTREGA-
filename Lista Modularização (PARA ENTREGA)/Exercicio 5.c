/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 5

Crie uma funcão que determine se dado caracter está entre ‘a’ e ‘z’. Dica: 
Use a tabela ASCII.  
******************************************************************************/
#include <stdio.h>

int AZ(char letra) {
    if (letra >= 'a' && letra <= 'z') {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    char letra;
    printf("Digite um caractere: ");
    scanf("%c", &letra);
    if (AZ(letra)) {
        printf("O caractere '%c' está entre 'a' e 'z'\n", letra);
    } else {
        printf("O caractere '%c' não está entre 'a' e 'z'\n", letra);
    }
    return 0;
}

