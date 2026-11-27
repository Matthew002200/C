#include <stdio.h>
#define hour 60
int main (void)
{
    int min;
    printf("Введите количество минут: \n");
    scanf("%d", &min);
    while(min > 0)
    {
        int hours;
        int minutes;
        hours = min / 60;
        minutes = min % 60;
        printf("%d часов %d минут \n", hours, minutes);
        printf("Для выхода введите число =< 0 \n");
        scanf("%d", &min);        
    }

    return 0;
}