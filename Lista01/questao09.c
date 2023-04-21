#include <stdio.h>
#include <stdlib.h>
#include "questao09.h"

//Crie um algoritmo que leia um número e alerte quando o mesmo for maior do que 100.


void entradaQ09(int *num){
    //entrada
    printf("Digite um numero: ");
    scanf("%d",num);
};


void processamentoQ09(int *num){
    //processamento
     if (*num == 100){
        printf("\nO numero %d é igual a 100", *num);
    } else if (*num > 100){
        printf("\nO numero %d é maior que 100", *num);
    } else {
        printf("\n----- FIM -----");
    }
}



void questao09(void){
    //declaracao
    int numero;

    ////entrada
    entradaQ09(&numero);

    //processamento
    processamentoQ09(&numero);


};
