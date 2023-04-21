#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

//Crie um algoritmo que leia um número inteiro e informe se ele é ou não divisível por 5.

void entradaQ13(int *a){
    //entrada
    printf("Digite um numero: ");
	scanf("%d", a);
};


void processamentoQ13(int *a, int *resultado){
    //processamento
    *resultado = *a % 5;
};

void saidaQ13(int resultado){
    if(resultado == 0){
		printf("\nO numero digitado e divisivel por 5.\n");
	} else {
	    printf("\nO numero digitado nao e divisivel por 5.\n");
	}

};

void questao13(void){
    //declaracao
    int a;
    int resultado;

    //entrada
    entradaQ13(&a);

    //processamento
    processamentoQ13(&a, &resultado);

    //saida
    saidaQ13(resultado);

};
