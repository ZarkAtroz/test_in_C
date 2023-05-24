#include "stdio.h"
int main(void) {

  int vetor[5], i;

  for(i = 0; i < 5; i++){
    printf("Informe elemento %d: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("\nValores impares do vetor: \n");

  for(i = 0; i < 5; i++){
    if(vetor[i] % 2 == 1){
      printf("Elemento %d: %d\n", i, vetor[i]);
    }
  }

  return 0;
}