#include <stdio.h>

int main ()

{
    int d;
    printf("Введите число в дюймах \n");
    scanf("%d", &d);
    int cm = d * 2;
    printf("%d", cm);

    return 0;
}