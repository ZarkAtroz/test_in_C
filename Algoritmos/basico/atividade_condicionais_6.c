int main(int argc, char const *argv[])
{
    int num;

    printf("Informe numero: ");
    scanf("%d", &num);

    if (num % 6 == 0 ) {
        printf("O numro e divisivel!");
    } else {
        printf("O numero nao e divisivel!");
    }
    return 0;
}
