#include <stdio.h>

int main() {
    
    float num, maior, menor, resultado;
    
    printf("Informe numero: ");
    scanf ("%f", &num);

  menor = num;
  maior = num;
  
    while(num != 0){

    printf ("Informe número: ");

      if(num < menor){
          menor = num;
      }
      if(num > maior){
          maior = num;
      }
      scanf ("%f", &num);
    }

    resultado = maior - menor;
    
    printf ("Resultado: %.2f", resultado);
    
    return 0;
}