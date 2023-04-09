/******************************************************************************

Gustavo Zandona Ghiotti

15/02/2023

As maçãs custam R $1,30 cada se forem compradas menos de uma dúzia, e R $1,00 se forem compradas pelo
menos 12. Escreva um programa que leia o número de maçãs compradas e escreva o custo total da compra.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int maca;
    float valorMaca, valorTotal;
    
    printf("Digite o total de macas compradas: \n");
    scanf("%d", &maca);
    
    if(maca < 12)
        valorMaca = 1.30;
    else valorMaca = 1.00;
    
    valorTotal = valorMaca * maca;
    printf("O valor das macas e: %.2f", valorTotal);

    return 0;
}

