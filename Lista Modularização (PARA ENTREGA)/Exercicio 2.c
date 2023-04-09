/******************************************************************************

Gustavo Zandona Ghiotti 

05/04/2023

Lista Modularização - EXERCÍCIO 2

 Escreva uma funcão que retorne a divisão entre dois números inteiros. 
 Atencao para a questão da divisão por zero! A divisão não pode ocorrer se o divisor for zero.   
******************************************************************************/

float divisao(int valor1, int valor2) {
	
    if (valor2 == 0) {
        printf("Erro: divisao por zero!\n");
        return 0;
    } else {
        return (float) valor1 / valor2;
    }
}

int main() {
    int valor1, valor2;
    float resultado;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &valor2);
    
    resultado = divisao(valor1, valor2);
    
    printf("A divisao entre %d e %d é %f", valor1, valor2, resultado);
    
    return 0;
}

