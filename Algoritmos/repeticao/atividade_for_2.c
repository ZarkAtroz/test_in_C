#include <stdio.h>

int main() {

    int i;

    for (i = 10; i >= 0; i--)
    {
        printf("%d ", i);
        sleep(1);
    }
    
    return 0;
}