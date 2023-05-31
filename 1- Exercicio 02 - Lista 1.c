/******************************************************************************

Gustavo Zandona Ghiotti

15/02/2023

Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e
válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
a) Escreva as saídas, entradas e o processamento
b) Implemente em linguagem C

*******************************************************************************/

#include <stdio.h>

int main()
{
    int total, nulo, branco, valido;
    printf("Digite o numero total de votos: \n");
    scanf("%d", &total);
    
    printf("Digite o numero de votos nulos: \n");
    scanf("%d", &nulo);
    
    printf("Digite o numero de votos brancos: \n");
    scanf("%d", &branco);
    
    printf("Digite o numero de votos validos: \n");
    scanf("%d", &valido);
    
    valido = total - nulo - branco;
    
    printf("Percentual de Nulos = %.1f\n", nulo * 1.0 / total * 100);
    printf("Percentual de Brancos = %.1f\n", branco * 1.0 / total * 100);
    printf("Percentual de Validos = %.1f\n", valido * 1.0 / total * 100);

}
