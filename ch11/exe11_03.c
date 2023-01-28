#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 20
char * get_word(char *target);
int main(void)
{
    char word[SIZE];

    puts("Please enter a word:");
    get_word(word);
    puts(word);

    return 0;
}

char * get_word(char *target)
{
    int ch;
    int i = 0;
    bool inword = false;

    while((ch = getchar()) != EOF)
    {
        if(isspace(ch))
        {
            if(inword)
                break;
            else
                continue;
        }
        if(!inword)
            inword = true;
        *(target + i) = ch;
        i++;
    }
    *(target + i) = '\0';
    while(getchar() != '\n')
        continue;
    
    return target;
}