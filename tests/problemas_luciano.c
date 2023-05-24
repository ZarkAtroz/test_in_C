#include <stdio.h>

int main() {

    int tamanho;

    int i, axl, soma = 10;

    int vetor_x[10] = {1,2,3,4,5,6,7,8,9,10};

/*
    for (i = 0; i < 10; i++) {
        printf("\nInforme elemento %d: ", i);
        scanf("%d", vetor_x[i]);
    }
*/

    for(i = 0; i < 10; i++){
        for(axl = 1 + i; axl < 10; axl++){
            if((vetor_x[i] + vetor_r[axl]) == soma){
                printf(" %d + %d = %d\n", vetor_x[i], vetor_r[axl], soma);
            } else {
                printf(" zero ");

                return 0;
            } 
            
        }               
    }

    
    
    
    return 0;
}