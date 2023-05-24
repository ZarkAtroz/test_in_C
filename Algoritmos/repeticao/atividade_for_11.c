#include <stdio.h>

int main() {

  int i, axl = 1;

  for (i = 1; i <= 10; i++) {

    printf("%d ", axl);
    
    axl = axl * 3;
  
  }
  return 0;
}