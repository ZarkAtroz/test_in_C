#include <stdio.h>
#include <string.h>

int main() {
    char str[100], nova_str[100];
    int i, j, len;

    printf("Digite uma string: ");
    scanf("%[^\n]s", str);

    len = strlen(str);

    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != ' ') {
            nova_str[j] = str[i];
            j++;
        }
    }

    nova_str[j] = '\0'; // adiciona o caractere nulo ao final da nova string

    len = strlen(nova_str);

    // verifica se a nova string é um palíndromo
    int palindromo = 1; // assume que a string é um palíndromo

    for (i = 0; i < len/2; i++) {
        if (nova_str[i] != nova_str[len - i - 1]) {
            palindromo = 0; // se houver diferença, a string não é um palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }

    return 0;
}
