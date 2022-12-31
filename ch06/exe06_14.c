#include <stdio.h>
#define SIZE 8
int main(void)
{
    double array[SIZE], cumulative_sum[SIZE];
    double sum = 0.0;
    int i;

    printf("Enter 8 doubles:\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%lf", &array[i]);
        sum += array[i];
        cumulative_sum[i] = sum;
    }

    printf("      Integers:");
    for (i = 0; i < SIZE; i++)
        printf("%6.2f", array[i]);
    printf("\n");
    printf("Cumulative sum:");
    for (i = 0; i < SIZE; i++)
        printf("%6.2f", cumulative_sum[i]);
    printf("\n");


    return 0;
}