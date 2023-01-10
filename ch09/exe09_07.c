#include <stdio.h>
#include <ctype.h>
int letter_location(char ch);
int main(void)
{
    char ch;

    while((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            continue;
        else{
            if(letter_location(ch) > 0)
                 printf("%c %d\n", ch, letter_location(ch));
             else
                printf("%c is not a alpha.\n", ch);
        }
    }
            
    printf("Bye.\n");

    return 0;
}

int letter_location(char ch)
{
    int location;

    if(isalpha(ch))
    {
        ch = tolower(ch);
        location = ch - 'a' + 1;
    }else
        location = -1;

    return location;
}