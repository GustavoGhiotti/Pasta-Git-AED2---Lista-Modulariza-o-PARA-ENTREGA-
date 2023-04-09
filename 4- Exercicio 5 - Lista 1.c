/*******************************************************************************

Gustavo Zandona Ghiotti
15/02/2023

Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. Sabendo-se que ele recebe
uma comissão de 3% sobre o total das vendas até R $1.500,00 mais 5% sobre o que ultrapassar este valor,
calcular e escrever o seu salário total.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salariofx, valorvenda, comissao, salariofn;
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salariofx);
    
    printf("Digite o valor das vendas efetuadas pelo funcionario: \n");
    scanf("%f", &valorvenda);
    
    if(valorvenda <= 1500)
        comissao = 0.03;
    else comissao = 0.05;
    
    salariofn = salariofx + comissao * salariofx;
    
    printf("O salario final do vendedor e de: R$%.2f", salariofn);
    
    return 0;
}


