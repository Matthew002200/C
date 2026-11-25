#include <stdio.h> 
int main(void) 
{  
int count, sum, max;
printf("Введите максимальное значение переменной \n");
scanf("%d", &max); 
count = 0; 
sum = 0; 
while (count++ < max)
    sum = sum + count;
printf("sum = %d\n" , sum); 
return 0;
}
