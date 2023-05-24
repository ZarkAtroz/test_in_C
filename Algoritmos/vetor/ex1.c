#include "stdio.h"
int main(void) {

  int vetor[5], i;

  // Preenchimento do vetor
  for (i = 0; i < 5; i++) {
    printf("Informe elemento %d: ", i);
    scanf("%d", &vetor[i]);
  }

  printf("\nElementos inversos do vetor: \n");

  for (i = 4; i >= 0; i--) {
    printf("\nElemento %d: %d\n", i, vetor[i]);
  }

  return 0;
}
