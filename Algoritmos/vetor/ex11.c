#include "stdio.h"
int main(void) {

    char* vetorM[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    float vetorT[12];

    float media;

    //Preenchimento da temperatura por mes
    for (int i = 0; i < 12; i++) {
        printf("Informe a temperatura do mes %s: ", vetorM[i]);
        scanf("%f", &vetorT[i]);
        media += vetorT[i];
    }

    media /= 12.00;
    printf("Temperatura meia anual: %.2f\n\n", media);

    for (int i = 0; i < 12; i++) {
        if (media < vetorT[i]) {
            printf("A temperatura media no mes de %s foi maior que a temperatura media anual\n", vetorM[i]);
        }
        
    }
    
    return 0;
}