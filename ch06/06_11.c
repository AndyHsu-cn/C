#include <stdio.h>
int main(void)
{
    const int NUMBER = 22;
    int count;

    for ( count = 1; count <= NUMBER; count++)
        printf("%2d, Be my Valentine!\n", count);

    return 0;
}