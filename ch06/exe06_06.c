#include <stdio.h>
int main(void)
{
    long upper, lower;
    int read;
    int i;

    printf("This program prints a table of intergers with their squares"
           " and cubes.\n");
    printf("Enter lower and upper integers limits (in that order): ");
    scanf("%ld %ld", &lower, &upper);
    printf("  Interger|    Square|      Cube\n");
    printf("----------|----------|----------\n");
    for (i = lower; i <= upper; i++)
        printf("%10d|%10d|%10d\n", i, i * i, i * i * i);

    return 0;
}