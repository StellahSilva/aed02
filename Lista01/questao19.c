#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

//Crie um algoritmo que leia três lados de um triângulo e determine se ele é equilátero,
//isósceles ou escaleno. Quando os três lados forem iguais trata-se de um triângulo
//equilátero, dois lados iguais é um triângulo isósceles e os três lados diferentes é um triângulo escaleno.

void entradaQ19(int *x, int *y, int *z){
    //entrada
    printf("\nDigite o valor de X: ");
	scanf("%d", x);
	printf("\nDigite o valor de Y: ");
	scanf("%d", y);
	printf("\nDigite o valor de Z: ");
	scanf("%d", z);

};


void processamentoQ19(int *x, int *y, int *z){
    //processamento

        if((*x == *z) && (*x == *y) && (*z == *y)){
            printf("\nOs valores formam um triângulo equilatero.\n");
        } else {
            if ((*x == *z) || (*x == *y) || (*z == *y)){
                printf("\nOs valores formam um triângulo isosceles.\n");
            } else {
                printf("\nOs valores formam um triângulo escaleno.\n");
            }
            }

};

//void saidaQ19(tipo){};

void questao19(void){
    //declaracao
    int x;
    int y;
    int z;


    //entrada
    entradaQ19(&x, &y, &z);

    //processamento
    processamentoQ19(&x, &y, &z);

    //saida
  //  saidaQ19();

};
