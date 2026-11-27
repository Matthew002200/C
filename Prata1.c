#include <stdio.h>

int main ()

{
    int d;
    printf("Enter the number in inches. \n");
    scanf("%d", &d);
    int cm = d * 2;
    printf("%d", cm);

    return 0;
}