#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

//Sabendo que somente os munic�pios que possuem mais de 200.000 eleitores t�m segundo turno nas elei��es para prefeito quando o 1� colocado n�o obt�m mais do
//que 50% dos votos, crie um algoritmo que leia o nome do munic�pio, a quantidade de eleitores e o n�mero de votos do candidato mais votados e informe se ter�
// ou n�o segundo turno na elei��o municipal.


void entradaQ22(char municipio[], int *eleitores, int *votos) {
    printf("Digite o nome do municipio: ");
    fgets(municipio, 50, stdin);
    printf("Digite a quantidade de eleitores: ");
    scanf("%d", eleitores);
    printf("Digite o numero de votos do candidato mais votado: ");
    scanf("%d", votos);
    getchar(); //limpa o buffer do teclado
}

void processamentoQ22(char municipio[], int eleitores, int votos, char resultado[]) {
    if (eleitores > 200000 && votos <= eleitores * 0.5) {
        sprintf(resultado, "O municipio %s tera segundo turno.", municipio);
    } else {
        sprintf(resultado, "O municipio %s nao tera segundo turno.", municipio);
    }
}

void saidaQ22(char resultado[]) {
    printf("%s\n", resultado);
}

void questao22(void) {
    char municipio[50], resultado[100];
    int eleitores, votos;

    entradaQ22(municipio, &eleitores, &votos);
    processamentoQ22(municipio, eleitores, votos, resultado);
    saidaQ22(resultado);

}

