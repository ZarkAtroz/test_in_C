#include <stdio.h>

int main() {

  float axl = 0;

  int num1 = 1;
  int num2 = 1;

  for (int i = 1; i <= 20; i++) {

    axl += (float)num1 / (num2);

    num1 = num1 + 2;
    num2 = num2 * 2;
  }

  printf("%.2f ", axl);

  return 0;
}