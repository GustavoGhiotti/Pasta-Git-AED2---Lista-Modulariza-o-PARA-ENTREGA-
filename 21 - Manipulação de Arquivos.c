/******************************************************************************
Gustavo Zandona Ghiotti

10/05/2023

Manipulação de Arquivos em C

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
FILE *arq;
int quantiLinhas = 3;
char nomeArq[20]="Teste.txt";

//---------------------------
    void LeArquivo () {
//---------------------------
     char linha[100], *result;
     int i=1;
     arq = fopen(nomeArq , "r");
     if (arq == NULL) { // Se houve erro na abertura
        printf("Problemas na abertura do arquivo\n");
        return;
     }
     while (!feof(arq))  {
       result = fgets(linha, 100, arq);  //'fgets' lê até 99 caract./até '\n'
       if (result)  // Se foi possível ler
	       printf("Linha %d > %s",i,linha);
       i++;
    }
    fclose(arq);
}


//-------------------------
   void gravaArquivo () {
//-------------------------
    int i, result;
    arq = fopen(nomeArq, "w");  
    if (arq == NULL) { // Se nào conseguiu criar
       printf("Problemas na CRIACAO do arquivo\n");
       return;
    }

  // Grava linhas no arquivo 
   for (i = 1; i<= quantiLinhas ;i++) {
        result = fprintf(arq,"Conteudo da Linha %d\n",i);  					  
        if (result == EOF)  printf("Erro na Gravacao\n");
    }
    fclose(arq);
}

void main() {
  printf ("Gerando o arquivo Teste.txt ...\n\n");
  gravaArquivo ();

  printf ("Lendo o arquivo Teste.txt ...\n\n");
  LeArquivo ();
}
