/******************************************************************************

Gustavo Zandona Ghiotti 

15/02/2023


Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma
comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um
algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor
que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.


*******************************************************************************/
#include <stdio.h>

int main()
{
    int carros; 
    float valor, salario, comissao;
    
    printf("Digite o salario do funcionario: \n");
    scanf("%f", &salario);
    
    printf("Digite o numero de carros vendidos: \n");
    scanf("%d", &carros);
    
    printf("Digite o valor total dos carros vendidos: \n");
    scanf("%f", &valor);
    
    printf("Digite a comissao por carro: \n");
    scanf("%f", &comissao);
    
    salario = salario + carros * comissao + 0.05 * valor;
    
    printf("O salario total do funcionario e: %.1f", salario);

    return 0;
}


