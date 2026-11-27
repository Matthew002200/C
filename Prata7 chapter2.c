#include <stdio.h>
void one_three(void);
void two(void);
void two(void)
{
    printf("два\n");
}
void one_three(void)
{
    printf("один\n");
    two();
    printf("три\n");
}
int main (void)
{
    printf("начать сейчас\n");
    one_three();
    printf("порядок !\n");
    return 0;
}