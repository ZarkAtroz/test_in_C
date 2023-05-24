int main(int argc, char const *argv[])
{
    int kg_mor, kg_mac, p_total;

    printf("Informe a quantidade de quilos de morango: ");
    scanf("%d", &kg_mor);

    printf("Informe a quantidade de quilos de macas: ");
    scanf("%d", &kg_mac);

    if (kg_mor <= 5) {
        p_total = kg_mor * 6.5;
    } else {
        p_total = kg_mor * 6.2;
    }

    if (kg_mac <= 5) {
        p_total = kg_mac * 3.8;
    } else {
        p_total = kg_mac * 3.5;
    }
    
    if (kg_mor + kg_mac > 10 || p_total > 50) {
        p_total = p_total * 0.9;
    }
    
    printf("Total a pagar: %d", p_total);
    
    return 0;
}
