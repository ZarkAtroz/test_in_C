#include <stdio.h>
int main() {

    int vetor_x[10] = {21,13,-2,-1,12,-4,-5,42,17,32};
    int vetor_r[10];
    int i, axl = 0;

/*
    //Adiciona os valores ao vetor X
    for (i = 0; i < 10; i++) {
        printf("Informe elemento %d: ", i + 1);
        scanf("%d", &vetor_x[i]);
    }
*/

    printf("\n\n[Vetor X] => |");

    for (i = 0; i < 10; i++) {
        printf(" %d |", vetor_x[i]);
        
    }

    //Realiza a troca dos valores dos elementos da variavel
    for (i = 0; i < 10; i++) {
        if (vetor_x[i] < 0) {
            vetor_r[axl] = vetor_x[i];
            axl++;
        }
    }

    printf("\n\n\n[Vetor R apos a copia] => |");

    for (i = 0; i < axl; i++) {
        printf(" %d |", vetor_r[i]);

    }
    
    printf("\n");

 return 0;
}