#include <stdio.h>
#include <string.h>

int main() {

    char nome1[] =  "gabriel";
    char nome2[] =  "gabriel";

    // Se %d for igual a -1 é false', se for igual a 0 é true
    //printf("%d\n", strcmp(nome1, nome2));

    if (strcmp(nome1, nome2) == 0) {
        printf("As strings sao iguais.");

    } else {

        printf("As strings sao diferentes.");
    }
    

    return 0;
}