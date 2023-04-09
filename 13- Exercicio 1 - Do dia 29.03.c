/******************************************************************************

Gustavo Zandona Ghiotti

29/03/2023

Saida: 6 printf com alterções antes e depois da chamada das funções
Entrada: Nenhuma
Processo: Criar uma função que retorne um valor inteiro, para
que ocorra uma alteração na variável no corpo main

Alterações:
mudança da tipagem da função para ser capaz de retornar um int
adicionar ao fim da função um return com o valor desejado
*******************************************************************************/

#include <stdio.h>

int muda(int);
int muda2();


int main(){
	int n=5;
	printf ("\nn = %d antes da chamada de muda", n);
	n = muda (n);
	printf ("\nn = %d depois da chamada de muda", n);
	printf("\n\n\n");
	n=5;
	printf ("\nn = %d antes da chamada de muda2", n);
	muda2();
	printf ("\nn = %d depois da chamada de muda2", n);
	return 0;
}

int muda(int n){
	n = 10;
	printf("\nn = %d dentro da funcao muda", n);
	return n;
}

int muda2(){
	int n = 10;
	printf("\nn = %d dentro da funcao muda2", n);
}



