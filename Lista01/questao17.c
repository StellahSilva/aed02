#include <stdio.h>
#include <stdlib.h>
#include "questao17.h"

//Um comerciante comprou um produto e quer vendê-lo com um lucro de 50% se o valor da compra for menor que R$ 200,
//caso contrário o lucro será de 30%. Crie um algoritmo que leia o valor da compra e exiba o valor da venda.

void entradaQ17(float *mercadoria) {
    printf("\nDigite o valor do produto: ");
	scanf("%f", mercadoria);

}

void processamentoQ17(float *mercadoria, float *valorFinal){
    if(*mercadoria < 200){
		*valorFinal = *mercadoria + ((*mercadoria * 50)/100);
	} else {
		*valorFinal = *mercadoria + ((*mercadoria * 30)/100);
		}
}

void saidaQ17(float *valorFinal){
    printf("\nO valor da venda sera R$ %.2f.\n", *valorFinal);
}

void questao17(void) {
    //declaraçao
    float mercadoria, valorFinal;

    //entrada
    entradaQ17(&mercadoria);

    //processamento
    processamentoQ17(&mercadoria, &valorFinal);

    //saida
    saidaQ17(&valorFinal);

}
