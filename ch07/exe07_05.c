#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int cnt = 0;

    printf("Enter input (%c to exit):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
       switch(ch)
       {
        case '.':
            putchar('!');
            cnt++;
            break;
        case '!':
            putchar('!');
            putchar('!');
            cnt++;
            break;
        default:
            putchar(ch);
            break;
       }
    }
    printf("\nReplaced %d times.\n", cnt);

    return 0;
}
