#include <stdio.h>
#include <stdbool.h>
#include <inttypes.h>

int main (int argc, char* argv[])
{
    unsigned char c;
    int8_t i8;
    int16_t i16;
    int32_t i32;
    int64_t i64;
    //double d;
    //bool b;

    printf("Размер unsigned char: %zu байт\n", sizeof(c));
    printf("Размер int8_t:        %zu байт\n", sizeof(i8));
    printf("Размер int16_t:       %zu байт\n", sizeof(i16));
    printf("Размер int32_t:       %zu байт\n", sizeof(i32));
    printf("Размер int64_t:       %zu байт\n", sizeof(i64));
    return 0;
}
//cplusplus.com/reference/stdint в C библиотека эта называется inttypes