#include <stdio.h>
void cube(float n);
void cube(float n)
{
    float u;
    u=n*n*n;
    printf("%f", u);
}
int main (void)
{
    float e;
    printf("Enter a number \n");
    scanf("%f", &e);
    cube(e);
    return 0;
}
