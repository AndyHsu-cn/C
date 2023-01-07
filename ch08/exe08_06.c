#include <stdio.h>
#include <ctype.h>
char get_first(void);
int main(void)
{
    int ch;

    while((ch = get_first()) != EOF)
    {
        printf("%c %d\n", ch, ch);
    }
    printf("Bye!\n");

    return 0;
}

char get_first(void)
{
    int ch;

    while(isspace(ch = getchar()))
        continue;
    if(ch != EOF)
        while(getchar() != '\n')
            continue;

    return ch;
}