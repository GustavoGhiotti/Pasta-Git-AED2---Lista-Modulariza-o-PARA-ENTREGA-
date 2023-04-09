/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 3

Escreva um programa que calcule a área de um círculo a partir de uma funcão 
especialmente desenhada para isso; essa funcão recebe o valor do raio e retorna a área do círculo.    
******************************************************************************/

#include <stdio.h>

float Area(float raio) {
    return 3.14159 * raio * raio;
}

int main() {
    float raio, area;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    area = Area(raio);
    
    printf("A area do circulo de raio %.2f é %.2f", raio, area);
    
    return 0;
}

