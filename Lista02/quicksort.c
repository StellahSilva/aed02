#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

//Método de Ordenação por Quicksort
// Função de entrada
void entradaQquicksort(int *V, int inicio, int fim)
{
    int pivo;
    if (fim > inicio) {
        pivo = particiona(V, inicio, fim);
        entradaQquicksort(V, inicio, pivo - 1);
        entradaQquicksort(V, pivo + 1, fim);
    }
}

// Função de processamento (Quicksort)
int particiona(int *V, int inicio, int final)
{
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];

    while (esq < dir) {
        while (V[esq] <= pivo && esq < final)
            esq++;
        while (V[dir] > pivo)
            dir--;
        if (esq < dir) {
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}

// Função de saída
void saidaQquicksort(int *tamanho, int lista[])
{
    printf("Elementos do array em ordem crescente:\n");
    for (int i = 0; i < *tamanho; i++) {
        printf("%4d", lista[i]);
    }
    printf("\n");
}

void quicksort(void)
{
    // Declaração e inicialização
    int TAM = 10;
    int elementos[TAM];

    // Entrada
    printf("\nEntre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &elementos[i]);
    }

    // Processamento
    entradaQquicksort(elementos, 0, TAM - 1);

    // Saída
    saidaQquicksort(&TAM, elementos);
}
