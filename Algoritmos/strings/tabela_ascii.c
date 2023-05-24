#include <stdio.h>

int main() {
  int i, count;
  
  printf("32 = space\t");
  
  count = 1;
  
    for(i = 33;i < 127; i++) {

    printf("%d = %c\t\t", i, i);
    count++;
        
    if(count == 5) {
      printf("\n");

      count = 0;
    }
  }
    
  printf("127 = del");
    
  return 0;
}