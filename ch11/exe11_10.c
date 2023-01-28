#include <stdio.h>
#include <string.h>
#define LIMIT 20
#define SPACE ' '
char * s_gets(char *st, int n);
void remove_spaces(char * st);
int main(void)
{
    char str[LIMIT];

    printf("Test remove_spaces()\n");

	printf("Enter a string: ");
    while(s_gets(str, LIMIT) && str[0] != '\0')
    {
        printf("Original: %s\n", str);
        remove_spaces(str);
        printf("Removal : %s\n", str);
        printf("Enter another string: ");
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

void remove_spaces(char * st)
{
    int char_cnt = 0;
    while(*st)
    {
        if(*st == SPACE)
            char_cnt++;
        else
            *(st - char_cnt) = *st;
        st++;
    }
    *(st - char_cnt) = '\0';
}