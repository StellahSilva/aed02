#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

//Fa�a um algoritmo em Linguagem C que receba tr�s n�meros inteiros e calcule a soma deles.


void entradaQ01 (int *num1, int *num2){
    //entrada
    printf("Digite o primeiro numero: ");
    scanf("%d", num1);
    printf("Digite o segundo numero: ");
    scanf("%d", num2);

}

void processamentoQ01(int *num1, int *num2, int *saida){
    //processamento
    *saida = (*num1+ *num2)*3;

}

void saidaQ01(int saida){
    //saida
    printf("Resultado: %d", saida);

}

void questao01(void){
    //declara��o e inicializacao
    int numero1;
    int numero2;
    int resultado;

    //entrada
    entradaQ01(&numero1, &numero2);

    //processamento
    processamentoQ01(&numero1,&numero2,&resultado);

    //saida
    saidaQ01(resultado);

}
