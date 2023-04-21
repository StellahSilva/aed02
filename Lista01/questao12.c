#include <stdio.h>
#include <stdlib.h>
#include "questao12.h"

//Crie um algoritmo que leia duas notas para calcular a média do aluno e determinar se o mesmo foi aprovado ou reprovado.
//A média para aprovação é 7.

void entradaQ12(float *nota3, float *nota4){
    //entrada
    printf("Digite a 1o nota : ");
    scanf("%f", nota3);
    printf("Digite a 2o nota: ");
    scanf("%f", nota4);

};


void processamentoQ12(float *nota3, float *nota4, float *resultado){
    //processamento
    *resultado = (*nota3  + *nota4 ) / 2;

};

void saidaQ12(float resultado){
    if (resultado >= 7){
    	printf("\nEsta aprovado!");
	} else {
		printf("\nEsta reprovado!");
	}

};

void questao12(void){
    //declaracao
    float nota3;
    float nota4;
    float resultado;


    ////entrada
    entradaQ12(&nota3, &nota4);

    //processamento
    processamentoQ12(&nota3, &nota4, &resultado);

    //saida
    saidaQ12(resultado);

};
