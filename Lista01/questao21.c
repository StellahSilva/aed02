#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

//Crie um algoritmo que leia três números e exibe os números em ordem crescente.


void entradaQ21(int *num4, int *num5, int *num6) {
    //entrada
    printf("\nDigite o 1o numero: ");
    scanf("%d", num4);
    printf("\nDigite o 2o numero: ");
    scanf("%d", num5);
    printf("\nDigite o 3o numero: ");
    scanf("%d", num6);
}

void processamentoQ21(int *num4, int *num5, int *num6, int *resultado) {
    //processamento
    if(num4 == num5 && num4 == num6 && num5 == num6){
		printf("\nNumeros iguais.");
	} else {
		if (num4 > num5 && num4 > num6 ){
			if (num5 >= num6){
				resultado = 1;
			} else{
				resultado = 2;
			}
		}
		if (num5 > num4 && num5 > num6){
			if(num4 >= num6){
				resultado = 3;
			} else {
				resultado = 4;
			}
		}
		if (num6 > num4 && num6 > num5){
			if(num4 >= num5){
				resultado = 5;
			} else {
				resultado = 6;
			}
		}
	}
};

void saidaQ21(int *resultado, int *num4, int *num5, int *num6) {
    //saida
    if (*resultado == 0) {
        printf("\nNúmeros idênticos.\n");
    } else {
        if (*resultado == 1) {
            printf("A ordem dos numeros e: %d, %d, %d.", *num4, *num5, *num6);
        };
        if (*resultado == 2) {
            printf("A ordem dos numeros e: %d, %d, %d.", *num4, *num6, *num5);
        };
        if (*resultado == 3) {
            printf("A ordem dos numeros e: %d, %d, %d.", *num5, *num4, *num6);
        };
        if (*resultado == 4) {
            printf("A ordem dos numeros e: %d, %d, %d.", *num5, *num6, *num4);
        };
        if (*resultado == 5) {
            printf("A ordem dos numeros e: %d, %d, %d.", *num6, *num4, *num5);
        };
        if (*resultado == 6) {
            printf("A ordem dos numeros e: %d, %d, %d.", *num6, *num5, *num4);
        };
        };
};


void questao21(void){
    //declaracao
    int num4;
    int num5;
    int num6;
    int resultado;

    //entrada
    entradaQ21(&num4,&num5,&num5);

    //processamento
    processamentoQ21(&num4,&num5,&num6,&resultado);

    //saida
    saidaQ21(&resultado,&num4,&num5,&num6);

};
