int main(int argc, char const *argv[])
{
    int num_copias;
    float v_total;

    printf("Informe o numero de copias: ");
    scanf("%d", &num_copias);

    if (num_copias <= 100) {
        v_total = num_copias * 0.25;
    } else {
        v_total = (num_copias - 100) * 0.20 + 25;
    }

    printf("Valor total: %.2f", v_total);

    return 0;
}
