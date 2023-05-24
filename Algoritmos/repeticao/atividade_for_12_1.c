#include <stdio.h>

int main() {

    float axl = 0;

    for (int i = 1; i <= 100; i++) {
        
        axl = axl + (float)i / (101 - i);

        // gasto de memoria em float

    }
    
    printf("%.2f\n", axl);

    return 0;
}