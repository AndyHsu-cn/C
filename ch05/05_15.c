#include <stdio.h>
void pound(int n);
int main(void)
{
    int times = 5;
    char ch = '!';      // ASCII 33
    float f = 6.0f;

    pound(times);
    pound(ch);
    pound(f);

    return 0;
}

// 打印n个'#'
void pound(int n)
{
    while(n-- > 0)
        printf("#");
    printf("\n");
}