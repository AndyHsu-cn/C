#include <stdio.h>
#define ROWS 6
int main(void)
{
    int i, j;
    char letter = 'A';

    for (i = 1; i <= ROWS; i++)
    {
        for (j = 1; j <= i; j++)
            printf("%c", letter++);
        printf("\n");
    }

    return 0;
}