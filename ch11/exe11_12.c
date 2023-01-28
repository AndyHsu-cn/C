#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int main(void)
{
    int ch;
    int word_cnt = 0;
    int upper_cnt = 0;
    int lower_cnt = 0;
    int punct_cnt = 0;
    int digit_cnt = 0;
    bool inword = false;

    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
        {
            if(!inword)
            {
                inword = true;
                word_cnt++;
            }
            if(isupper(ch))
                upper_cnt++;
            else
                lower_cnt++;
        }else if(ispunct(ch))
        {
            punct_cnt++;
            if(ch != '-' && ch != '\'')
                inword = false;
        }else if(isdigit(ch))
        {
            digit_cnt++;
            inword =false;
        }else if(isspace(ch))
            inword =false;
    }
    printf("Number of %s: %d\n", "lowercase letters", lower_cnt);
	printf("Number of %s: %d\n", "uppercase letters", upper_cnt);
	printf("Number of %s: %d\n", "punctuation characters", punct_cnt);
	printf("Number of %s: %d\n", "digits", digit_cnt);
	printf("Number of %s: %d\n", "words", word_cnt);
    printf("Bye!\n");
    
    return 0;
}