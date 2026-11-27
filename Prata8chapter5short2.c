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
    int status; // Переменная для хранения результата scanf

    while (1) // Бесконечный цикл
    {
        printf("Enter the temperature in degrees Fahrenheit (or 'q' to quit): \n");
        
        status = scanf("%lf", &t); // Отдельно считываем данные
        
        if (status != 1) {         // Если ввели НЕ число...
            break;                 // ...сразу выходим из цикла
        }
        
        Temperatures(t);           // Вызываем функцию
    }
    
    printf("Программа завершена.\n");
    return 0;
}