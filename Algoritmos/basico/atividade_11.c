int main(int argc, char const *argv[])
{
    float v_bran, v_nul, v_vali, total_v;

    printf("Informe a quantidade de votos brancos: ");
    scanf("%f", &v_bran);

    printf("Informe a quantidade de votos nulos: ");
    scanf("%f", &v_nul);

    printf("Informe a quantidade de votos validos: ");
    scanf("%f", &v_vali);

    total_v = v_bran + v_nul + v_vali;

    printf("Porcentagem de votos brancos: %f", v_bran / total_v);
    printf("\nPorcentagem de votos nulos: %f", v_nul / total_v);
    printf("\nPorcentagem de votos validos: %f", v_vali / total_v);

    return 0;
}
