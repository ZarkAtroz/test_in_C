int main(int argc, char const *argv[])
{
    float alt, ideal_p;
    char genero;

    printf("Informe seu gerenro (M/F): ");
    scanf("%c", &genero);

    printf("Informe sua altura: ");
    scanf("%f", &alt);

    if (genero == 'M')
    {
        ideal_p =  72.7 * alt - 58;
    } else {
        ideal_p = 62.1 * alt - 44.7;
    }
    
    printf("Seu peso ideal e %.2f", ideal_p);
    return 0;
}
