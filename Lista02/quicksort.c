#include <stdio.h>
#include <stdlib.h>
#include "quicksort.h"

//M�todo de Ordena��o por Quicksort
// Fun��o de entrada
void entradaQquicksort(int *V, int inicio, int fim)
{
    int pivo;
    if (fim > inicio) {
        pivo = particiona(V, inicio, fim);
        entradaQquicksort(V, inicio, pivo - 1);
        entradaQquicksort(V, pivo + 1, fim);
    }
}

// Fun��o de processamento (Quicksort)
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

// Fun��o de sa�da
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
    // Declara��o e inicializa��o
    int TAM = 10;
    int elementos[TAM];

    // Entrada
    printf("\nEntre com dez n�meros para preencher o array, e pressione enter ap�s digitar cada um:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &elementos[i]);
    }

    // Processamento
    entradaQquicksort(elementos, 0, TAM - 1);

    // Sa�da
    saidaQquicksort(&TAM, elementos);
}
