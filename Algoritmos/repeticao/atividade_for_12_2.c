int main(int argc, char const *argv[])
{
    float numera, denomi, soma;
    int i;

    numera = 1;
    denomi = 100;

    soma = 0;

    for(i = 1; i <= 100; i++) {
        soma = soma + numera / denomi;
        numera++;
        denomi--;
    }

    printf("Resultado = %.2f", soma);

    return 0;
}
