#include <stdio.h>
#define SIZE 4
int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    int i;

    printf("%p %p %p %p\n", &value1, arr, &value2, &i);
    printf("value1 = %d, value2 = %d\n", value1, value2);
    for(i = -3; i < SIZE; i++)
        arr[i] = 2 * i +  1;
    for(i = -4; i < SIZE + 1; i++)
        printf("%2d %d\n", i, arr[i]);
    printf("value1 = %d, value2 = %d\n", value1, value2);

    return 0;
}