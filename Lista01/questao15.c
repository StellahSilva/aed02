#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

//Crie um algoritmo que leia dois valores diferentes e determine o maior.

void entradaQ15(int *c, int *d){
    //entrada
    printf("\nDigite o 1o numero: ");
	scanf("%d", c);
	printf("\nDigite o 2o numero: ");
	scanf("%d", d);
};


void processamentoQ15(int *c, int *d, int *resultado){
    //processamento
    *resultado = *c - *d;
};

void saidaQ15(int resultado, int *c, int *d){

    if(resultado == 0){
		printf("\nOs numeros são iguais.\n");
	} else {
		if(resultado > 0){
			printf("\nO numero %d e o maoir.\n", *c);
		} else {
	    printf("O numero %d e o maior.", *d);
	}
	}

};

void questao15(void){
    //declaracao
    int c;
    int d;
    int resultado;

    //entrada
    entradaQ15(&c, &d);

    //processamento
    processamentoQ15(&c, &d, &resultado);

    //saida
    saidaQ15(resultado, &c, &d);

};
