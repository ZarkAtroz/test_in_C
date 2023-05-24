int main(int argc, char const *argv[])
{
    int num;

    printf("Informe numero: ");
    scanf("%d", &num);

    if (num >= 20 && num <= 90)
    {
        printf("Esta no intervalo!");
    } else {
        printf("Nao esta no intervalo!");
    }
    
    return 0;
}
