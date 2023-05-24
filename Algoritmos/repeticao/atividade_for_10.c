#include <stdio.h>

int main() {

  int calc, fat;

    printf("informe o valor a ser fatorado: ");
    scanf("%d", &fat);
  
    calc = 1;

    for (fat; fat >= 1; fat--) {

        calc = calc * fat;

    }

      printf("O fatorial do numero informado %d ", calc);
    return 0;
  
}
