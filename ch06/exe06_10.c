#include <stdio.h>
int sum_of_squares(int lower, int upper);
int main(void)
{
    int lower, upper;

    printf("Enter lower and upper integer limits: ");
    while (scanf("%d %d", &lower, &upper) == 2 && lower < upper)
    {
        printf("The sum of the squares from %d to %d is %d\n",
                lower, upper, sum_of_squares(lower, upper));
        printf("Enter next set of limits: ");
    }
    printf("Done\n");

    return 0;
}

int sum_of_squares(int lower, int upper)
{
    int sum = 0;
    int i;

    for (i = lower; i <= upper; i++)
        sum += (i * i);
    
    return sum;
}