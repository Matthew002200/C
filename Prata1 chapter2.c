#include <stdio.h>
int main(void)
{
    char name[] = "Matthew";
    char surname[] = "Zaitsev";
    printf ("%s %s \n", name, surname);
    printf ("%s\n%s \n", name, surname);
    printf ("%s ", name);
    printf ("%s", surname);
    return 0;
}