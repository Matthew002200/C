#include <stdio.h>
#define name "Matthew"
#define surname "Zaitsev"
int main(void)
{
    printf ("%s %s \n", name, surname);
    printf ("%s\n%s \n", name, surname);
    printf ("%s ", name);
    printf ("%s", surname);
    return 0;
}