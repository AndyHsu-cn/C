#include <stdio.h>
#include <limits.h>
int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
        putchar(ch);
    
    return 0;
}