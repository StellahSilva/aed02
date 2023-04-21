#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

//Faça um algoritmo Linguagem C que receba o salário-base e a quantidade de dependentes,
//e calcule o salário líquido sabendo que, para cada filho, o funcionário recebe o salário
//família de R$ 32,00 e, ao final, paga imposto de renda de 27,5% sobre o salário bruto.

void entradaQ05(float *salario, int *qDependentes) {
    printf("Digite o salario base: ");
    scanf("%f", salario);
    printf("Digite a quantidade de dependentes: ");
    scanf("%d", qDependentes);

}

void processamentoQ05(float *salario, float *salarioBruto, int *qDependentes){
    *salarioBruto = *salario + (*qDependentes * 32);
    *salarioBruto = *salarioBruto - (*salarioBruto *27.5 /100);

}

void saidaQ05(float saidaQuestao05){
    printf("\n Valor do salario após desconto do imposto de renda e adicional por dependente: R$ %.2f", saidaQuestao05);
}

void questao05(void) {
    float salarioBase, salarioBruto;
    int dependentes;

    entradaQ05(&salarioBase, &dependentes);

    processamentoQ05(&salarioBase, &salarioBruto, &dependentes);

    saidaQ05(salarioBruto);

}
