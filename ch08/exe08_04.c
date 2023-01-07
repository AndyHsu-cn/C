#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
int main(void)
{
    bool in_word = false;
    int word_cnt , char_cnt;
    int ch;

    word_cnt = char_cnt = 0;
    while((ch = getchar()) != EOF)
    {
        if(!isspace(ch) && !ispunct(ch))
        {
            char_cnt++;
            if(!in_word)
            {
                in_word = true;
                word_cnt++;
            }
        }else
            in_word = false;
    }
    printf("char_cnt = %d, word_cnt = %d\n", char_cnt, word_cnt);
    printf("Average letters per word: %.2f\n", (float)char_cnt / word_cnt);

    return 0;
}