#include <stdio.h>
#include <stdlib.h>
#include "questao22.h"

//Sabendo que somente os municípios que possuem mais de 200.000 eleitores têm segundo turno nas eleições para prefeito quando o 1º colocado não obtém mais do
//que 50% dos votos, crie um algoritmo que leia o nome do município, a quantidade de eleitores e o número de votos do candidato mais votados e informe se terá
// ou não segundo turno na eleição municipal.


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

