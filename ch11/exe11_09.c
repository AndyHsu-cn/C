#include <stdio.h>
#include <string.h>
#define SIZE 20
char * s_gets(char *st, int n);
void reverse(char * str);
int main(void)
{
    char str[SIZE];

    printf("Please enter a string (EOF to quit):\n");
    while(s_gets(str, SIZE) && str[0] != '\0')
    {
        printf("original: %s\n", str);
        reverse(str);
        printf("reverse: %s\n", str);
        printf("Please enter next string (EOF to quit):\n");
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

void reverse(char * str)
{
    int i;
    int len = strlen(str);
    char tmp;

    for(i = 0; i < len / 2; i++)
    {
        tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 -i] = tmp;
    }
}