#include <stdio.h>

int main ()

{
<<<<<<< HEAD:Prata1.c
    int d;
    printf("Enter the number in inches. \n");
    scanf("%d", &d);
    int cm = d * 2;
    printf("%d", cm);
=======
    int dm;
    printf("Введите число в дюймах \n");
    scanf("%d", &dm);
    float cm = dm * 2.54;
    printf("%.3f", cm);
>>>>>>> cad0e2667cfb8ad37d26f66748e06b801dbf1a2f:Prata1 chapter1.c

    return 0;
}