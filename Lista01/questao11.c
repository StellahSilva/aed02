#include <stdio.h>
#include <stdlib.h>
#include "questao11.h"

//Crie um algoritmo que leia um número e alerte quando o mesmo estiver entre 100 e 500.

void entradaQ11(int *num11){
    //entrada
    printf("Digite um numero: ");
    scanf("%d",num11);
};


void processamentoQ11(int *num11){
    //processamento
    if (100 <= *num11 && *num11 <= 500){
        printf("\nO numero %d esta entre 100 e 500", *num11);
    } else {
        printf("\n----- FIM -----");
    }

};



void questao11(void){
    //declaracao
    int numero11;

    //entrada
    entradaQ11(&numero11);

    //processamento
    processamentoQ11(&numero11);



};
