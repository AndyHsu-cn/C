#include <stdio.h>
#define SIZE 8
int main(void)
{
    int powers_of_2[SIZE];
    int power = 2;
    int i;
    for(i = 0; i < SIZE; i++, power *= 2)
        powers_of_2[i] = power; 
    i = 0;
    do
    {
        printf("%d ", powers_of_2[i]);
    } while (++i < SIZE);
    printf("\n");

    return 0;
}