#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '#'
int main(void)
{
    char ch, prev;
    int ei_count = 0;

    prev  = STOP;
    printf("This program reads input and counts the number of times the\n"
		   "sequence 'ei' occurs (case insensitive).\n");
	printf("Enter input (%c to stop):\n", STOP);
    while ((ch = tolower(getchar())) != STOP)
    {
        if(ch == 'i' && prev == 'e')
            ei_count++;
        prev = ch;
    }
    printf("The sequence 'ei' occurs %u times.\n", ei_count);

    return 0;
}