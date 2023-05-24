int main(int argc, char const *argv[])
{
    float cap_tank, l_abs, km_perc, cons_medio, aut;

    printf("Informe a capacidade do tanque: ");
    scanf("%f", &cap_tank);

    printf("Informe litros abastecidos: ");
    scanf("%f", &l_abs);

    printf("Informe quilometros percorridos: ");
    scanf("%f", &km_perc);

    cons_medio = km_perc / l_abs;
    aut = (cap_tank - l_abs) * cons_medio;
    
    printf("O consumo medio foi de %f e a autonomia sera: %f", cons_medio, aut);

    return 0;
}
