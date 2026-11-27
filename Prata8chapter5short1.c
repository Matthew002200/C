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
    int status;
    
    printf("Enter the temperature: \n");
    status = scanf("%lf", &t); // Первый ввод (затравка)
    
    while (status == 1)        // Если ввели число...
    {
        Temperatures(t);       // ...делаем работу...
        
        printf("Enter next temperature (or 'q' to quit): \n");
        status = scanf("%lf", &t); // ...и просим ввести еще раз
    }
    return 0;
}