#include <stdio.h>
#include <stdlib.h>
#include "questao19.h"

//Crie um algoritmo que leia tr�s lados de um tri�ngulo e determine se ele � equil�tero,
//is�sceles ou escaleno. Quando os tr�s lados forem iguais trata-se de um tri�ngulo
//equil�tero, dois lados iguais � um tri�ngulo is�sceles e os tr�s lados diferentes � um tri�ngulo escaleno.

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
            printf("\nOs valores formam um tri�ngulo equilatero.\n");
        } else {
            if ((*x == *z) || (*x == *y) || (*z == *y)){
                printf("\nOs valores formam um tri�ngulo isosceles.\n");
            } else {
                printf("\nOs valores formam um tri�ngulo escaleno.\n");
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
