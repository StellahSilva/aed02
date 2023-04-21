#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

//Crie um algoritmo que leia a média das duas unidades para calcular a sua média final.
//Em seguida exiba a média final e o resultado que pode ser aprovado, prova final ou reprovado.
//A média de aprovação é 7, menor que 3 para reprovação e as demais prova final.

void entradaQ18(float *media1, float *media2) {
    printf("Digite a media da primeira unidade: ");
    scanf("%f", media1);
    printf("Digite a media da segunda unidade: ");
    scanf("%f", media2);
}

void processamentoQ18(float *media1, float *media2, float *mediaFinal, char *resultado) {
    *mediaFinal = (*media1 + *media2) / 2;

    if (*mediaFinal >= 7.0 && *mediaFinal <= 10.0) {
        *resultado = 'A';
    } else {
        if (*mediaFinal >= 3.0 && *mediaFinal < 7.0) {
        *resultado = 'PF';
    } else {
        *resultado = 'R';
    }
    }
}

void saidaQ18(float *mediaFinal, char resultado) {

    if (resultado == 'A'){
            printf("Aluno aprovado!\n");
            printf("Media final: %.2f\n", *mediaFinal);
    } else {
        if (resultado == 'PF'){
           printf("Aluno em prova final.\n");
            printf("Media final: %.2f\n", *mediaFinal);
        } else {
           printf("Aluno reprovado.\n");
            printf("Media final: %.2f\n", *mediaFinal);
        }
        }


}

void questao18() {
    float media1, media2, mediaFinal;
    char resultado;

    //entrada
    entradaQ18(&media1, &media2);
    //processamento
    processamentoQ18(&media1, &media2, &mediaFinal, &resultado);
    //saida
    saidaQ18(&mediaFinal, resultado);
}
