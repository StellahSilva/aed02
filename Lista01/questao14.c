#include <stdio.h>
#include <stdlib.h>
#include "questao14.h"

//Crie um algoritmo que leia um número inteiro e informe se ele é par ou ímpar.

void entradaQ14(int *b){
    //entrada
    printf("Digite um numero: ");
	scanf("%d", b);
};


void processamentoQ14(int *b, int *resultado){
    //processamento
    *resultado = *b % 2;
};

void saidaQ14(int resultado){
    if(resultado == 0){
		printf("\nO numero digitado e par.\n");
	} else {
	    printf("\nO numero digitado e impar.\n");
	}

};

void questao14(void){
    //declaracao
    int b;
    int resultado;

    //entrada
    entradaQ14(&b);

    //processamento
    processamentoQ14(&b, &resultado);

    //saida
    saidaQ14(resultado);

};
