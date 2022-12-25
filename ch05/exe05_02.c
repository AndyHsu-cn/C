#include <stdio.h>
int main(void)
{
    int start;
    int count;

    printf("Enter an integer: ");
    scanf("%d", &start);
    count = start;
    while(count <= start + 10)
    {
        printf("%d  ", count);
        count++;
    }
    printf("\n");

    return 0;
}