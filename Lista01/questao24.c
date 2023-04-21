#include <stdio.h>
#include <stdlib.h>
#include "questao24.h"

//Suponha que um caixa disponha apenas de notas de 1, 10 e 100. Considerando que
//alguém está pagando uma compra. escreva um algoritmo que mostre o número
//mínimo de cada nota que o caixa dev fornecer como troco. O algoritmo receberá
//como entrada o Valor da Compra e Valor do pagamento, ambos os valores são
//inteiro. Caso o valor do pagamento seja inferior ao valor da compra o cálculo não
//será efetuado deverá imprimir a seguinte mensagem: “Pagamento Negado”.


void entradaQ24(int *compra, int *pagamento) {
    printf("Qual o valor da compra: ");
    scanf("%d", compra);
    printf("Qual o valor do pagamento: ");
    scanf("%d", pagamento);
}

void processamentoQ24(int *valor_troco, int *notas100, int *notas10, int *notas1) {
    // Quantidade de notas de 100 necessárias
    *notas100 = *valor_troco / 100;
    *valor_troco -= *notas100 * 100;

    // Quantidade de notas de 10 necessárias
    *notas10 = *valor_troco / 10;
    *valor_troco -= *notas10 * 10;

    // Quantidade de notas de 1 necessárias é o valor restante
    *notas1 = *valor_troco;
}

void saidaQ24(int *notas100, int *notas10, int *notas1) {
    // Resultado
    printf("Troco: %d notas de 100, %d notas de 10 e %d notas de 1.\n", *notas100, *notas10, *notas1);
}

void questao24(void) {
    //entrada
    int compra, pagamento, valor_troco;
    int notas100 = 0, notas10 = 0, notas1 = 0;

    //entrada
    entradaQ24(&compra, &pagamento);

    // Verificar se o pagamento é suficiente para cobrir a compra
    if (pagamento < compra) {
        printf("Pagamento Negado\n");
        return;
    }

    // O valor do troco
    valor_troco = pagamento - compra;

    //processamento
    processamentoQ24(&valor_troco, &notas100, &notas10, &notas1);

    // saída
    saidaQ24(&notas100, &notas10, &notas1);
}

