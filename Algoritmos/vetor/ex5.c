#include "stdio.h"
int main(void) {

  int vetor_a[5], vetor_b[5], i;

  // preenchimento do vetor_a
  for (i = 0; i < 5; i++) {
    printf("Informe elemento %d: ", i);
    
    scanf("%d", &vetor_a[i]);
  }

  // vetor_b copia de vetor_a
  for (i = 0; i < 5; i++) {
      vetor_b[i] = vetor_a[i] * 2;
    printf("\nElemento %d: %d", i, vetor_b[i]);
  }

  // dobrar valor de vetor_a


  return 0;
}