#include <stdio.h>
#include <string.h>

int main() {

    char mensa[101];// = {"A ligeira raposa marrom saltou sobre o cachorro cansado"};
    char cripto[101];

    int axl = 3;
    int i = 0;

    printf("[ MENSAGEM ]: ");
    scanf(" %100[^\n]", mensa);

    while (mensa[i] != '\0') {
        char letra = mensa[i];
        
        if (letra >= 'A' && letra <= 'Z') {
            letra = ((letra - 'A') + axl) % 26 + 'A';
        } else if (letra >= 'a' && letra <= 'z') {
            letra = ((letra - 'a') + axl) % 26 + 'a';
        }
        
        mensa[i] = letra;
        
        i++;
    }

    printf("\n\n[ MENSAGEM CODIFICADA ]\n\n");

    printf("%s", mensa);

    printf("\n");
    
 return 0;
}