#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define SIZE 20
char * get_word(char *target, int max);
int main(void)
{
    char word[SIZE];
    int max_accepted = 7;

    printf("Please enter a word (no more than %d letters):", max_accepted);
    get_word(word, max_accepted);
    puts(word);

    return 0;
}

char * get_word(char *target, int max)
{
    int ch;
    int i = 0;
    bool inword = false;

    while((ch = getchar()) != EOF && i < max)
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