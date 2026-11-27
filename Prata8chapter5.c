#include <stdio.h>
void Temperatures(double F);
void Temperatures(double F)
{
    const double Cels1 = 1.8;
    const double Cels2 = 32.0;
    const double Kelv = 273.16;
    double Cels, Kel;
    Cels = Cels1 * F + Cels2;
    Kel = Cels + Kelv;
    printf("Farenheit = %.2f, Celsium = %.2f, Kelvin = %.2f \n", F, Cels, Kel);
}
int main (void)
{
    double t;
    printf("Enter the temperature in degrees Fahrenheit: \n");
    while(scanf("%lf", &t) == 1)
    {
        Temperatures(t);
        printf("If you want to finish the program enter any non‑numerical value \n");
    }
    return 0;
}