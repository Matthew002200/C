#include <stdio.h>
/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */
int main(void)
{
int fahr, celsius;
int lower, upper, step;
lower = 0; /* нижняя граница таблицы температур */
upper = 300; /* верхняя граница */
step = 20; /* шаг */
fahr = lower;
printf("Преобразование температур из градусов Фаренгейта в градусы Цельсия");
while (fahr <= upper) {
celsius = 5 * (fahr-32) / 9;
printf ("%d\t%d\n", fahr, celsius);
fahr = fahr + step;
}
}