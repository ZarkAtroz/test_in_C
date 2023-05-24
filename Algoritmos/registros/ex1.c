#include <stdio.h>

/* Definicao do registro */
struct Aluno{
    char nome_alun[50];
    char nome_disc[50];
    float nota_1;
    float nota_2;
};


int main(){

    int i;
    float media;

/* Declaracao do resgistro */
    struct Aluno aluno[3];

/* Entrada dos dados*/
    for (i = 0; i < 3; i++) {
        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", aluno[i].nome_alun);

        printf("Informe o nome da diciplina %d: ", i+1);
        scanf("%s", aluno[i].nome_disc);

        printf("Informe nota um %d: ", i+1);
        scanf("%f", &aluno[i].nota_1);

        printf("Informe nota dois %d: ", i+1);
        scanf("%f", &aluno[i].nota_2);

        printf("\n\n");
    }
    
/* Apresentar dados */
    printf("\nDados dos alunos:\n");

    for (i = 0; i < 3; i++) {

        media = (aluno[i].nota_1 + aluno[i].nota_2) / 2;

        if (media >= 6) {

        printf("Aluno %d:\n", i + 1);

        printf("Nome: %s\n", aluno[i].nome_alun);

        printf("Disciplina: %s\n", aluno[i].nome_disc);

        printf("Media: %.2f\n", media);

        printf("\n\n");
            
        }
    }
    

return 0;   
}