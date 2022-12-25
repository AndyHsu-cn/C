#include <stdio.h>
int main(void)
{
    int count, sum;
    int max;

    count = 0;
    sum = 0;
    printf("How many integers would you like to sum? ");
    scanf("%d",  &max);
    while (count++ < max)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}