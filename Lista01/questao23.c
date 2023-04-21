#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"


//Crie um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe o consumo estimado de combustível,
// sabendo-se que um carro do tipo C faz 12 KM com um litro de gasolina, um tipo B faz 9 KM e o tipo A faz 8 KM. Caso seja
//fornecido um tipo de carro inválido o algoritmo deve alertar o fato


void entradaQ23(float *percurso, char *tipo) {
    // Entrada do percurso
    printf("Digite o percurso em quilometros: ");
    if (scanf("%f", percurso) != 1) {
        printf("Erro na leitura do percurso.\n");
        exit(1);
    }

    // Entrada do tipo de carro
    printf("Digite o tipo de carro (A faz 8 KM, B faz 9 KM ou C faz 12 KM): ");
    scanf(" %c", tipo);
}

void processamentoQ23(float percurso, char tipo, float *consumo) {
    // Calcula o consumo estimado de combustível
    switch (tipo) {
        case 'A':
            *consumo = percurso / 8.0;
            break;
        case 'B':
            *consumo = percurso / 9.0;
            break;
        case 'C':
            *consumo = percurso / 12.0;
            break;
        default:
            printf("Tipo de carro invalido.\n");
            exit(1);
    }
}

void saidaQ23(float *consumo) {
    printf("Consumo estimado de combustivel: %.2f litros\n", *consumo);
}

void questao23(void) {
    float percurso, consumo;
    char tipo;

    entradaQ23(&percurso, &tipo);
    processamentoQ23(percurso,tipo, &consumo);
    saidaQ23(&consumo);

}
