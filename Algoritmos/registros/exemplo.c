#include <stdio.h>

/* Definição do registro */
struct Pessoa{
  char nome[50];
  char profissao[50];
  float renda;
};


int main(){
    
  /* Declaração do registro */
  struct Pessoa pessoa[3] = {{"Marcelo", 54, 1.82}, {"Ana", 19, 1.77}, {"Joao", 24, 1.84}};

  /* Entrada dos dados */
  for (int i = 0; i < 3; i++) {
    printf("Digite o nome da pessoa %d: ", i + 1);
    scanf("%s", pessoa[i].nome);
        
    printf("Digite a profissao da pessoa %d: ", i + 1);
    scanf("%s", pessoa[i].profissao);
        
    printf("Digite a renda da pessoa %d: ", i + 1);
    scanf("%f", &pessoa[i].renda);
  }

  /* Saída dos dados */
  printf("\nDados das pessoas:\n");

  for (int i = 0; i < 3; i++) {
    printf("Pessoa %d:\n", i + 1);
    printf("Nome: %s\n", pessoa[i].nome);
    printf("Profissao: %s\n", pessoa[i].profissao);
    printf("Renda: %.2f\n\n", pessoa[i].renda);
  }

  return 0;
}

/* retira o struct a baixo
    typedef struct{

    }pessoa;

    Pessoa pessoa[3];
*/