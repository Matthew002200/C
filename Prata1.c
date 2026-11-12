#include <stdio.h>

int main ()

{
    int dm;
    printf("Введите число в дюймах \n");
    scanf("%d", &dm);
    float cm = dm * 2.54;
    printf("%f", cm);

    return 0;
}