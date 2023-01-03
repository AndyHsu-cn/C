#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int cnt = 0;

    printf("Enter input (%c to exit):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
        if(ch == '.'){
            putchar('!');
            cnt++;
        }else if(ch == '!'){
            putchar(ch);
            putchar(ch);
            cnt++;
        }else
            putchar(ch);
    }
    printf("\nReplaced %d times.\n", cnt);

    return 0;
}