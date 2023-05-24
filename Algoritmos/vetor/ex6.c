#include "stdio.h"
int main(void) {

  int vetor[5], i, maior, menor, soma;
  float media;


    //Preenchimento do vetor 
    for (i = 0; i < 5; i++) {
      printf("Informe elemento %d: ", i+1);
      scanf("%d", &vetor[i]);
      
    }

    //Atribuicao de um valor
    soma = 0;
    media = 0;
    menor = vetor[0];
    maior = vetor[0];

    //Acha o maior e menor
     for (i = 0; i < 5; i++) {
      if(vetor[i] < menor){
        menor = vetor[i];
      }
      if(vetor[i] > maior){
        maior = vetor[i];
      }
       
      soma = soma + vetor[i];

      media = soma / 5.00;
       
    }


  printf("\nMaior: %d\nMenor: %d", maior, menor);
  printf("\nSoma: %d", soma);
  printf("\nMedia: %.2f\n", media);
  return 0;
}
