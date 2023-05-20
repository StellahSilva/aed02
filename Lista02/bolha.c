#include <stdio.h>
#include <stdlib.h>
#include "bolha.h"

//Método de Ordenação por Bolha

// Função de entrada
void entradaQbolha(int *TAM, int numeros[])
{
    printf("\nEntre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
    for (int i = 0; i < *TAM; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nOrdem atual dos itens no array:\n");
    for (int i = 0; i < *TAM; i++) {
        printf("%4d", numeros[i]);
    }
    printf("\n");
}

// Função de processamento (Bubblesort)
void processamentoQbolha(int *TAM, int numeros[])
{
    for (int contador = 1; contador < *TAM; contador++) {
        for (int i = 0; i < *TAM - 1; i++) {
            if (numeros[i] > numeros[i + 1]) {
                int aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
    }
}

// Função de saída
void saidaQbolha(int *TAM, int numeros[])
{
    printf("\nElementos do array em ordem crescente:\n");
    for (int i = 0; i < *TAM; i++) {
        printf("%4d", numeros[i]);
    }
    printf("\n");
}

void bolha(void)
{
    // Declaração e inicialização
    int TAM = 10;
    int numeros[TAM];

    // Entrada
    entradaQbolha(&TAM, numeros);

    // Processamento
    processamentoQbolha(&TAM, numeros);

    // Saída
    saidaQbolha(&TAM, numeros);
}
