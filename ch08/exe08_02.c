#include <stdio.h>
int main(void)
{
    int ch;
    int char_cnt = 0;

    while((ch = getchar()) != EOF)
    {
        if(ch >= ' ')
            printf("\'%c\':%d", ch, ch);
        else if(ch == '\n')
            printf("\'\\n\':%d", ch);
        else if(ch == '\t')
            printf("\'\\t\':%d", ch);
        else
            printf("\'^%c\':%d", ch + 64, ch);
        char_cnt++;
        if(char_cnt % 10 == 0)
            printf("\n");
        else
            printf(" ");
    }
    printf("\n");

    return 0;
}