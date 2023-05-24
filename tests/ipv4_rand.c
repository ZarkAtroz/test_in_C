#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para gerar um endereço IP aleatório da classe A
void generate_class_a_ip() {
    int oct1, oct2, oct3, oct4;
    oct1 = rand() % 128;  // O primeiro octeto deve estar entre 0 e 127 para a classe A
    oct2 = rand() % 256;  // O segundo octeto pode estar entre 0 e 255
    oct3 = rand() % 256;  // O terceiro octeto pode estar entre 0 e 255
    oct4 = rand() % 256;  // O quarto octeto pode estar entre 0 e 255
    printf("%d.%d.%d.%d\n", oct1, oct2, oct3, oct4);
}

// Função para gerar um endereço IP aleatório da classe B
void generate_class_b_ip() {
    int oct1, oct2, oct3, oct4;
    oct1 = 128 + rand() % 64;  // O primeiro octeto deve estar entre 128 e 191 para a classe B
    oct2 = rand() % 256;  // O segundo octeto pode estar entre 0 e 255
    oct3 = rand() % 256;  // O terceiro octeto pode estar entre 0 e 255
    oct4 = rand() % 256;  // O quarto octeto pode estar entre 0 e 255
    printf("%d.%d.%d.%d\n", oct1, oct2, oct3, oct4);
}

// Função para gerar um endereço IP aleatório da classe C
void generate_class_c_ip() {
    int oct1, oct2, oct3, oct4;
    oct1 = 192;  // O primeiro octeto deve ser 192 para a classe C
    oct2 = rand() % 256;  // O segundo octeto pode estar entre 0 e 255
    oct3 = rand() % 256;  // O terceiro octeto pode estar entre 0 e 255
    oct4 = rand() % 256;  // O quarto octeto pode estar entre 0 e 255
    printf("%d.%d.%d.%d\n", oct1, oct2, oct3, oct4);
}

int main() {
    // Inicializar o gerador de números aleatórios com o tempo atual como semente
    srand(time(NULL));

    // Gerar 5 endereços IP aleatórios de cada classe
    printf("Enderecos IP da classe A:\n");
    for (int i = 0; i < 5; i++) {
        generate_class_a_ip();
    }
    printf("\n");

    printf("Enderecos IP da classe B:\n");
    for (int i = 0; i < 5; i++) {
        generate_class_b_ip();
    }
    printf("\n");

    printf("Enderecos IP da classe C:\n");
    for (int i = 0; i < 5; i++) {
        generate_class_c_ip();
    }
    printf("\n");

    return 0;
}
