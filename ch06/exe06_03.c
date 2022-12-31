#include <stdio.h>
int main(void)
{
    const int ROWS = 6;
    const int COLS = 6;
    int i, j;
    for(i = 0; i < ROWS ; i++)
    {
        for (j = 0; j <= i; j++)
            printf("%c", 'F' -j);
        printf("\n");
    }

    return 0;
}