/******************************************************************************
Gustavo Zandona Ghiotti

03/05/2023

Aplicação de Bandas

*******************************************************************************/

for(int i=0;i<qt;i++) {

    printf("\nNome da banda: ");   
    scanf("%s", v[i].nome);  // %s nao use &

    printf("Estilo musical: ");           
    scanf("%s", v[i].estilo); // %s nao use &

    printf("Qt de integrantes: ") ;   
    scanf("%d",&v[i].tamanho);

    printf("Posicao no ranking: "); 
    scanf("%d",&v[i].rank);

  }
