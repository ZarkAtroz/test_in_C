int main(int argc, char const *argv[])
{
    float m_som, p_som, m_alt, p_alt;

    printf("Informe o comprimento da sua sombra: ");
    scanf("%f", &m_som);

    printf("Informe o comprimento da sombra do predio: ");
    scanf("%f", &p_som);

    printf("Informe a sua altura: ");
    scanf("%f", &m_alt);

    p_alt = p_som / m_som * m_alt;

    printf("A altura do predio e: %.2f", p_alt);

    return 0;
}
