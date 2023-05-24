#include "stdio.h"
#include "stdbool.h"

int main(void) {

    int vetorG[6] = {10,14,17,19,21,34};
    int vetorA[10];

    int i, pontos;
/*
    for (i = 0; i < 6; i++){
        printf("Gabarito Mega-Sena %d: ", i + 1);
        scanf("%d", &vetorG[i]);
    }

    printf("-------------------------");
*/
    for (i = 0; i < 10; i++) {
        printf("%d numero da sorte: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("-------------------------");

    pontos = 0;

    for (i = 0; i < 10; i++) {
        
        if (vetorG[0] == vetorA[i]) {
        pontos++;
        }

        if (vetorG[1] == vetorA[i]) {
        pontos++;
        }

        if (vetorG[2] == vetorA[i]) {
        pontos++;
        }

        if (vetorG[3] == vetorA[i]) {
        pontos++;
        }

        if (vetorG[4] == vetorA[i]) {
        pontos++;
        }

        if (vetorG[5] == vetorA[i]) {
        pontos++;
        }        
        
    }

    printf("\n\nSeus numeros da sorte foram:");

    for (i = 0; i < 10; i++) {
        printf(" %d|", vetorA[i]);
    }

    printf("\n\nGabarito Mega-Sena: ");

    for (i = 0; i < 6; i++) {
        printf(" %d|", vetorG[i]);
    }

    if (pontos == 6) {
        printf("\n\nParabens voce ganhou");
    } else {
        printf("\n\nFez %d pontos\n", pontos);
    }

return 0;
}