int main(int argc, char const *argv[])
{
    int num, num_ant, num_suc;

    printf("Informe o numero: ");
    scanf("%d", &num);

    num_ant = (-1) + num;
    num_suc = (+1) + num;

    printf("O numero sucessor de %d e %d e o antecesor e %d.", num, num_suc, num_ant);

    return 0;
}