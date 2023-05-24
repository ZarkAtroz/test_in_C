#include "stdio.h"
int main(void) {

  float vetor[5], soma, media;
  int i;

  // Preenchimento do vetor
  for (i = 0; i < 5; i++) {
    printf("Informe elemento %d: ", i);
    scanf("%f", &vetor[i]);
  }

  soma = 0;
  media = 0;

  for (i = 0; i < 5; i++) {
    
    soma = soma + vetor[i];
    
    }
    
    printf("______________________");
    

  printf("\nMedia: %.2f", media = soma / 5);

  for (i = 0; i < 5; i++){
        if(vetor[i] >= media){
      printf("\nElemento %d: %f", i, vetor[i]);
    }
    
  }

  return 0;
}
