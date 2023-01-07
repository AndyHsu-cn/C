#include <stdio.h>
int main(void)
{
    int ch;
    int cnt = 0;

    while((ch = getchar()) != EOF)
        cnt++;
    printf("cnt = %d\n", cnt);

    return 0;
}