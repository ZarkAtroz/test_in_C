#include "stdio.h"
int main() {

    int vetorA[100], vetorB[100], m[100][2], i, j;

    for (i = 0; i < 100; i++) {
        vetorA[i] = (i + 1) * 10;
        m[i][0] = vetorA[i];
    }

    for (i = 0; i < 100; i++) {
        vetorB[i] = 5 + (i) * 10;
        m[i][1] = vetorB[i];
    }

    for (i = 0; i < 100; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d  ", m[i][j]);
            sleep(1);
        }
        printf("\n");
    }
    
    
    return 0;
}