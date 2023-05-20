#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "mergesort.h"

//Método de Ordenação por Mergesort
// Função de entrada
void entradaQmergesort(int *V, int inicio, int fim)
{
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        entradaQmergesort(V, inicio, meio);
        entradaQmergesort(V, meio+1, fim);
        processamentoQmergesort(V, inicio, meio, fim);
    }
}

// Função de processamento (Mergesort)
void processamentoQmergesort(int *V, int inicio, int meio, int fim)
{
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0, fim2 = 0;
    tamanho = fim - inicio + 1;
    p1 = inicio;
    p2 = meio + 1;
    temp = (int *) malloc(tamanho * sizeof(int));

    if(temp != NULL){
        for(i = 0; i < tamanho; i++){
            if(!fim1 && !fim2){
                if(V[p1] < V[p2])
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];

                if(p1 > meio) fim1 = 1;
                if(p2 > fim) fim2 = 1;
            } else {
                if(!fim1)
                    temp[i] = V[p1++];
                else
                    temp[i] = V[p2++];
            }
        }
        for(j = 0, k = inicio; j < tamanho; j++, k++)
            V[k] = temp[j];
    }
    free(temp);
}

// Função de saída
void saidaQmergesort(int *V, int TAM)
{
    printf("Elementos do array em ordem crescente:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%4d", V[i]);
    }
    printf("\n");
}

void mergesort(void)
{
    // Declaração e inicialização
    int TAM = 10;
    int grupo[TAM];

    // Entrada
    printf("\nEntre com dez números para preencher o array, e pressione enter após digitar cada um:\n");
    for (int i = 0; i < TAM; i++) {
        scanf("%d", &grupo[i]);
    }

    // Processamento
    entradaQmergesort(grupo, 0, TAM - 1);

    // Saída
    saidaQmergesort(grupo, TAM);
}
