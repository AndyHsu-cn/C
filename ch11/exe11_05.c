#include <stdio.h>
#define LEN 20
char * s_gets(char *st, int n);
char * m_strchr(const char * source, int value);
int main(void)
{
    char string[LEN];
    char * result = NULL;
    int ch;

    printf("Please enter a string (EOF to quit):\n");
    while(s_gets(string, LEN) && string[0] != '\0')
    {
        printf("Please enter a character: ");
        ch = getchar();
        while(getchar() != '\n')
            continue;
        result = m_strchr(string, ch);
        if(result)
            printf("%c is found in sub_string %s\n", ch, result);
        else
            printf("Not exist %c in the string.\n", ch);
        printf("Please enter another string (EOF to quit):\n");
    }
    printf("Bye!\n");

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

char * m_strchr(const char * source, int value)
{
    while(*source != value && *source != '\0')
        source++;
    if(*source == '\0')
        return NULL;
    else
        return (char *)source;
}