#include <stdio.h>
int main ()
{
    int age;
    printf ("How old are you ? ");
    scanf("%d", &age);
    int days = age * 365;
    printf("days = %d", days);
    return 0;
}