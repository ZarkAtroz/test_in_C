#include <stdio.h>

int main() {

  float axl = 0, num = 1000;

  for (int i = 1; i <= 50; i++) {

    if (i % 2 == 0) {

      axl += num / i;
    } else {

      axl -= num / i;
    }

    num -= 3;
  }

  axl = axl * -1;

  printf("%.2f ", axl);

  return 0;
}