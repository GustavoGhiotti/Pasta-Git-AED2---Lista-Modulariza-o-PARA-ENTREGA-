/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 4

Crie um sistema de caixa eletrpnico, utilizando menus (switch) e outros 
recursos, que realizem operacões financeiras a partir de funcões especificamente 
projetadas para tal. Lembre-se de que o caixa eletronico é um programa que roda 
como repeticão contínua, até que o usuário decida encerrar as operacões. 
Operações: Depósito, Saque e Saldo.  
******************************************************************************/
#include <stdio.h>

float saldo = 0.0;

void deposito() {
    float valor;
    printf("\nDigite o valor do deposito: ");
    scanf("%f", &valor);
    saldo += valor;
    printf("\nDeposito realizado com sucesso!\n");
}

void saque() {
    float valor;
    if (saldo <= 0.0) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    printf("\nDigite o valor do saque: ");
    scanf("%f", &valor);
    if (valor > saldo) {
        printf("\nSaldo insuficiente para saque.\n");
        return;
    }
    saldo -= valor;
    printf("\nSaque realizado com sucesso!\n");
}

void consultaSaldo() {
    printf("\nSeu saldo atual é: R$%.2f\n", saldo);
}

int main() {
    int opcao = 0;
    while (opcao != 4) {
    	
        printf("\nSelecione uma opcao:\n");
        printf("1 - Deposito\n");
        printf("2 - Saque\n");
        printf("3 - Consulta de saldo\n");
        printf("4 - Sair\n");
        scanf("%d", &opcao);
        
        switch (opcao) {
            case 1:
                deposito();
                break;
            case 2:
                saque();
                break;
            case 3:
                consultaSaldo();
                break;
            case 4:
                printf("\nEncerrando programa...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
                break;
        }
    }
    return 0;
}

