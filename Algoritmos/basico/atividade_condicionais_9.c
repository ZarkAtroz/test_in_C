int main(int argc, char const *argv[])
{
    int idade;

    printf("Informe idade: ");
    scanf("%d", &idade);

    if (idade < 18) {
        printf("Menor de idade.");
    } else {
        if (idade >= 65) {
            printf("Terceira idade.");
        } else {
            printf("Maior idade");
        }
    }
    return 0;
}
