#include <stdio.h>

int main() {
    int contador;

/*quando tenho certeza da repeticao*/
    for (contador = 1; contador <= 5/* <- criar varivavel*/; contador++) {
        printf("%d ", contador);
    }
    
    return 0;
}