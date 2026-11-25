#include <stdio.h>
int main ( void )
{
float weight;
float value;

printf("Xoтитe узнать свой родиевый эквивалент ?\n");
printf("Дaвaйтe подсчитаем.\n");
printf("Пожалуйста, введите свой вес, выраженный в фунтах:");
scanf("%f", &weight);
value = 770.0 * weight * 14.5833;
printf ("Baш родиевый эквивалент составляет $ %.2f.\n", value);
printf ("Bы легко можете стать достойным этого ! Если цена родия падает,\n");
printf ("ешьте больше для поддержания своей стоимости.\n");
return 0;
}