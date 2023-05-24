#include <stdio.h>

int main() {
    
    int vetor1[10] = {1,2,3,4,5,6,7,8,9,10}, vetor2[10];
    int i, a, n, soma = 55;
    /*
    printf("[Informe 10 números]");
    
    for(i = 0; i < 10; i++){
        printf("\n%d° número: ", i +1);
        scanf("%f", &vetor1[i]);
    }
    
    printf("Escolha um valor resultante das somas: ");
    scanf("%d", &soma);
*/

    for(i = 0; i < 10; i++){
        for(a = i + 1; a < 10; a++){
            if((vetor1[i] + vetor1[a]) == soma){
                vetor2[n] = vetor1[i]; //= pra que serve
                vetor2[n +1] = vetor1[a]; //= pra que serve
                n++;
            }
        }
    }
    
    if(n > 0){
        printf("\n[Números somados igual a %d]", soma);
        for(i = 0; i < n; i += 2){
            printf("\nOs números %d e %d somados resulta em: %d", vetor2[i], vetor2[i +1], soma);
        }
    } else{
        printf("Não existe números somados igual a %d", soma);
    }
    

 return 0;
}