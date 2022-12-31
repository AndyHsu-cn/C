#include <stdio.h>
int main(void)
{
    const int ROWS = 5;
    const int COLS = 5;
    int i, j;

    for (i = 1; i <= ROWS; i++)
    {
        for (j = 1; j <= i; j++)
            printf("$");
        printf("\n");
    }

    return 0;
}