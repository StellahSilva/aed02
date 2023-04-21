#include <stdio.h>
#include <stdlib.h>
#include "questao16.h"

//Crie um algoritmo que após receber o Salário Bruto, calcule o salário líquido descontando 10% quando o salário
//bruto for menor que R$ 2000, caso contrário descontar 20%. No final, exiba o salário líquido.

void entradaQ16(float *salario) {
    printf("\nDigite seu salario: ");
	scanf("%f", salario);

}

void processamentoQ16(float *salario, float *salarioLiquido){
    if(*salario < 2000){
		*salarioLiquido = *salario - ((*salario * 10)/100);
	} else {
		*salarioLiquido = *salario - ((*salario * 20)/100);
		}
}

void saidaQ16(float *salarioLiquido){
    printf("\nO seu salario liquido e R$ %.2f\n.", *salarioLiquido);
}

void questao16(void) {
    //declaraçao
    float salario, salarioLiquido;

    //entrada
    entradaQ16(&salario);

    //processamento
    processamentoQ16(&salario, &salarioLiquido);

    //saida
    saidaQ16(&salarioLiquido);

}
