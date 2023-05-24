#include <stdio.h>

int main() {
    
    int X[10] = {21,13,-2,-1,12,-4,-5,42,17,32}, R[10], i, negativos;
/*    
    for (i = 0; i < 10; i++) {
        printf("digite o valor do elemento %d: ", i+1);
        scanf("%d", &X[i]);
    }
*/    
    for (i = 0; i < 10; i++) {
        if (X[i] < 0) {
            R[negativos] = X[i];
            negativos++;
        }
    }
    
    printf("valores negativos presentes no vetor R: ");
    
    for (i = 0; i < negativos; i++) {
        printf("%d ", R[i]);
    }
    
 return 0;
}