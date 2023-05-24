#include <stdio.h>

int main() {

    int soma = 0, num = 1, cont = 0;

    while (soma <= 100) {

        soma = soma + num;
        num++;
        cont++;

    }
    printf("%d sequencias", cont);

    return 0;
}
