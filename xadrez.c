#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int rainha;
    int bispo = 1;
    int torre = 1;

    while(torre <= 5) {
        printf("Torre move para a direita\n");
        torre++;
    }

    do {
        printf("Bispo move para cima e direita\n");
        bispo++;
    } while(bispo <= 5);

    for (rainha = 1; rainha <= 8; rainha++) {
        printf("Rainha move para a esquerda\n");
    }
    
    return 0;
}
