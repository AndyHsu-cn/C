#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'
int main(void)
{
    char ch;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed (| to terminate):\n");
    prev = '\n';
    while ((ch = getchar()) != STOP)
    {
        n_chars++;
        if(ch == '\n')
            n_lines++;
        if(!isspace(ch) && !inword)
        {
            n_words++;
            inword = true;
        }
        if(isspace(ch) && inword)
            inword = false;
        prev = ch;
    }
    if(prev != '\n')
        p_lines = 1;
    printf("characters = %ld, words = %d, lines = %d, partial lines = %d\n",
            n_chars, n_words, n_lines,  p_lines);

    return 0;
}