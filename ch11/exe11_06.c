#include <stdio.h>
#include <stdbool.h>
#define LEN 20
char * s_gets(char *st, int n);
bool is_within(int ch, const char * str);
int main(void)
{
    char str[LEN];
    int ch;

    printf("Please enter a string (EOF or Empty line to quit):\n");
    while(s_gets(str, LEN) && str[0] != '\0')
    {
        printf("Please enter a character: ");
        ch = getchar();
        while(getchar() != '\n')
            continue;
        if(!is_within(ch, str))
            printf("%c is not within %s\n", ch, str);
        else
            printf("%c is within %s\n", ch, str);
        printf("Please enter another string (EOF or Empty line to quit):\n");
    }
    printf("Bye.\n");

    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while(st[i] != '\n' && st[i] != '\0')
            i++;
        if(st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret_val;
}

bool is_within(int ch, const char * str)
{
    bool flag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            flag = true;
            break;
        }
        str++;
    }

    return flag;
}