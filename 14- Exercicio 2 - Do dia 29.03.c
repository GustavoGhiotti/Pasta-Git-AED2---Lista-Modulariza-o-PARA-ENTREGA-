/*******************************************************************************


Gustavo Zandona Ghiotti

29/03/2023

Saida: se o inteiro fornecido esta entre o intervalo(max e min fornecidos tambem)
Entrada: tres inteiros, o termo a ser verificado, o valor maximo e o valor minimo
processo: Criar uma função que recebe tres int como parametro e verifica com if
se o numero esta ou nao dentro do intervalo
dentro: return 0
fora: return 1
*******************************************************************************/

#include <stdio.h>

int verificaValo(int, int, int);

int main(){
	
	int x, max, min;
	printf("Insira o valor:");
	scanf("%d", &x);
	printf("Insira o valor maximo do intervalo: ");
	scanf("%d", &max);
	printf("Insira o valor do minimo do interalo: ");
	scanf("%d", &min);
	
	if(verificaIntervalo(max, min, x))
		printf("\nO valor %d esta dentro do intervalo entre %d ate %d\n", x, min, max);
	else
		printf("\nO valor %d esta fora do intervalo entre %d ate %d\n", x, min, max);
	
	return 0;
}

int verificaIntervalo(int max, int min, int x){
	if(x>min && x<max)
		return 1;
	else
		return 0;
}

