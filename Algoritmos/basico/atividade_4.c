int main(int argc, char const *argv[])
{
    float prova_1, prova_2, prova_3, media_fim;

    printf("Informe a nota da 1 prova: ");
    scanf("%f", &prova_1);

    printf("Informe a nota da 2 prova: ");
    scanf("%f", &prova_2);

    printf("Informe a nota da 3 prova: ");
    scanf("%f", &prova_3);

    media_fim = (2 * prova_1 + 3 * prova_2 + 5 * prova_3) /10;

    printf("Sua media final e: %f", media_fim);

    return 0;
}
