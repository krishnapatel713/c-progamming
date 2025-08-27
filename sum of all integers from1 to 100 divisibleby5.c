#include <stdio.h>
int main()
{
    int i, sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 5 == 0)
        {
            sum = sum + i;
        }
    }
    printf("Sum of integers divisible by 5 from 1 to 100 = %d\n", sum);
    return 0;
}