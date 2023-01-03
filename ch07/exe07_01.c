#include <stdio.h>
#define STOP '#'
#define SPACE ' '
#define NEWLINE '\n'
int main(void)
{
    char ch;
    int space, newline, other;

    space = newline = other = 0;
    printf("Enter input (%c to stop):\n", STOP);
    while ((ch = getchar()) != STOP)
    {
        switch (ch)
        {
        case SPACE:
            space++;
            break;
        case NEWLINE:
            newline++;
            break;
        default:
            other++;
            break;
        }
    } 
    printf("Character Count:\n");
	printf("----------------\n");
	printf("Spaces: %d\n"
		   "Newlines: %d\n"
		   "Othesr: %d\n", space, newline, other);
    
    return 0;
}