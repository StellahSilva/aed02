#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

//Crie um algoritmo que leia três números e exibe o maior deles. Caso os números sejam
//iguais exibir a seguinte mensagem: “Número idênticos”.


void entradaQ20(int *num1, int *num2, int *num3){
    //entrada
    printf("\nDigite o 1o numero: ");
	scanf("%d", num1);
	printf("\nDigite o 2o numero: ");
	scanf("%d", num2);
	printf("\nDigite o 3o numero: ");
	scanf("%d", num3);

};


void processamentoQ20(int *num1, int *num2, int *num3, int *resultado){
    //processamento
    if(*num1 == *num2 && *num1 == *num3){
		*resultado = 0;
	} else {
		if (*num1 > *num2 && *num1 > *num3 ){
			*resultado = *num1;
		} else {
			if (*num2 > *num1 && *num2 > *num3 ){
				*resultado = *num2;
			} else {
				*resultado = *num3;
			}
		}
		}

};

void saidaQ20(resultado){
    //saida
    if(resultado == 0){
        printf("\nNúmeros idênticos.\n");
	} else {
	    printf("\nO %d e o maior.\n", resultado);
		}
};


void questao20(void){
    //declaracao
    int num1;
    int num2;
    int num3;
    int resultado;



    //entrada
    entradaQ20(&num1,&num2,&num3);

    //processamento
    processamentoQ20(&num1,&num2,&num3,&resultado);

    //saida
    saidaQ20(resultado);

};
