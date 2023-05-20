#include <stdio.h>
#include <stdlib.h>
#include "selecao.h"

//M�todo de Ordena��o por Sele��o

// Fun��o de entrada
void entradaQselecao(int *tamanho, int grupo[])
{
    printf("\nEntre com dez n�meros para preencher a lista, e pressione enter ap�s digitar cada um:\t");
    for (int i = 0; i < *tamanho; i++) {
        scanf("%d", &grupo[i]);
    }

    printf("\nOrdem atual dos itens na lista:\t");
    for (int i = 0; i < *tamanho; i++) {
        printf("%4d", grupo[i]);
    }
    printf("\n");
}

// Fun��o de processamento (Sele��o)
void processamentoQselecao(int *tamanho, int grupo[])
{
    int menor, aux;
    for (int i = 0; i < *tamanho - 1; i++) {
            menor =i;
        for (int j = i+1; j < *tamanho; j++) {
            if(grupo[menor]>grupo[j]){
                menor=j;
            }
            if(i!=menor){
                aux=grupo[i];
                grupo[i]=grupo[menor];
                grupo[menor]=aux;
            }
        }
    }
}

// Fun��o de sa�da
void saidaQselecao(int *tamanho, int lista[])
{
    printf("Lista ordenada por Selecao: ");
    for (int i = 0; i < *tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n\n");
}

void selecao(void)
{
    // Declara��o e inicializa��o
    int TAM = 10;
    int grupo[TAM];

    // Entrada
    entradaQselecao(&TAM, grupo);

    // Processamento
    processamentoQselecao(&TAM, grupo);

    // Sa�da
    saidaQselecao(&TAM, grupo);
}
