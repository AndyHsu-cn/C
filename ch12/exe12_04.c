#include <stdio.h>
static int times = 0;

int fun(void)
{
    times++;

    return times;
}
int main(void)
{
    for(int i = 0; i < 5; i++)
        printf("fun called %d times.\n", fun());

    return 0;
}