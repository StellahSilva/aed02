#include <stdio.h>
#include <stdlib.h>
#include "insercao.h"

//Método de Ordenação por Inserção

// Função de entrada
void entradaQinsercao(int *tamanho, int lista[])
{
    printf("\nEntre com dez números para preencher a lista, e pressione enter após digitar cada um:\n");
    for (int i = 0; i < *tamanho; i++) {
        scanf("%d", &lista[i]);
    }

    printf("\nOrdem atual dos itens na lista:\n");
    for (int i = 0; i < *tamanho; i++) {
        printf("%4d", lista[i]);
    }
    printf("\n");
}

// Função de processamento (Insercao)
void processamentoQinsercao(int *tamanho, int lista[])
{
    int comp = 0;
    int trocas = 0;

    for (int i = 0; i < *tamanho - 1; i++) {
        int s = i;
        for (int j = i + 1; j < *tamanho; j++) {
            comp++;
            if (lista[j] < lista[s]) {
                s = j;
            }
        }
        if (s != i) {
            int aux = lista[i];
            lista[i] = lista[s];
            lista[s] = aux;
            trocas++;
        }
    }

    printf("\nComparacoes: %d\nTrocas: %d\n\n", comp, trocas);
}

// Função de saída
void saidaQinsercao(int *tamanho, int lista[])
{
    printf("Lista ordenada por Insercao: ");
    for (int k = 0; k < *tamanho; k++) {
        printf("%d ", lista[k]);
    }
    printf("\n\n");
}

void insercao(void)
{
    // Declaração e inicialização
    int TAM = 10;
    int lista[TAM];

    // Entrada
    entradaQinsercao(&TAM, lista);

    // Processamento
    processamentoQinsercao(&TAM, lista);

    // Saída
    saidaQinsercao(&TAM, lista);
}
