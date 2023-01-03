#include <stdio.h>
#define STOP '#'
#define SPACE ' '
#define NEWLINE '\n'
#define TAB '\t'
#define COLS 8
int main(void)
{
    char ch;
    int cnt = 0;

    printf("Enter input (%c to stop):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
        ++cnt;
        switch (ch)
        {
        case SPACE:
            printf("%4s|%3d]", "[' '", ch);
            break;;
        case TAB:
            printf("%4s|%3d]", " [\\t", ch);
            break;
        case NEWLINE:
            printf("%4s|%3d]", " [\\n", ch);
            break;;
        default:
            printf("  [%c|%3d]", ch, ch);
            break;
        }
        if(cnt % COLS == 0)
            printf("\n");
    }

    return 0;
}