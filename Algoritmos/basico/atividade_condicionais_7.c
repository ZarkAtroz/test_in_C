int main(int argc, char const *argv[])
{
    int num;

    printf("Informe numero: ");
    scanf("%d", &num);

    if (num % 2 == 0 || num % 7 == 0) {
            printf("O numero e divisivel!");
    } else {
        printf("O numero nao e divisivel7!");
    }
    return 0;
}
