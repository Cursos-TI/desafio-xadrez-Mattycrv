#include <stdio.h>

int main() {
    int rainha;
    int bispo = 1;
    int torre = 1;
    int cavalo = 1;

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

    while(cavalo--) {
        for(int i = 1; i <= 2; i++) {
            printf("Cavalo move para cima\n");
        }

        printf("Cavalo move para a esquerda\n");
    }

    return 0;
}
