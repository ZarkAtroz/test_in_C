int main(int argc, char const *argv[])
{
    int celc;
    float fare;

    for (celc = 0; celc <= 100; celc = celc + 5) {
        fare = celc * 1.8 + 32;

        printf("\ncelcsius: %d -> Farenheit: %.0f", celc, fare);
    }
    
    return 0;
}
