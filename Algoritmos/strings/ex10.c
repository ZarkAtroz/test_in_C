#include <stdio.h>
#include <string.h>

int main() {
    // Strings 10. Escreva um programa que, dada uma string, diga se ela e um palíndromo ou não. Lembrando que um palíndromo é um texto que tenha a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.
    
    char frase[51], semespaco[51], invertida[51];
    int j=0, tamanho=0;
    
    printf("Frase ou palavra: ");
    scanf(" %50[^\n]", frase);
    
    for(int i=0; frase[i] != '\0'; i++){
        if(frase[i] != 32){
            semespaco[j] = frase[i];
            j += 1;
        }
    }
    
    j=0;
    
    tamanho = strlen(semespaco) - 1;
    
    for(int i=tamanho; i >= 0; i--){
        invertida[j] = semespaco[i];
        j++;
    }
    
    if(strcmp(invertida, semespaco) == 0){
        printf ("%s é um palíndromo!", frase);
    } else {
        printf ("%s não é um palíndromo.", frase);
    }

 return 0;
}