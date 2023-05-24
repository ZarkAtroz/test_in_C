#include <stdio.h>

int main() {

    int i;

    for (i = 1; i <= 100; i++/*; i = i + 5 */) {
        if (i % 5 == 0) {
            printf("%d ", i);
            sleep(1);
        
        }
        
    }
    
    return 0;
}