#include  <stdio.h>
#define SIZE 8
int main(void)
{
    int array[SIZE];
    int i;

    printf("Enter 8 integers:\n");
    for(i = 0; i < SIZE; i++)
        scanf("%d", &array[i]);
    for (i = SIZE - 1; i >= 0; i--)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}