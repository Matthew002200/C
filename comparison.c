#include <stdio.h>
#include <stdbool.h>

int main (int argc, char* argv[])
{
    int x;

    x = (5>-1) + (3 <= 4) +
    (2*2 == 2+2) + (2*3 != 2+3); // избегать 5u>-2 (беззнаковое и знаковое)

    printf("x = %d\n", x);
}