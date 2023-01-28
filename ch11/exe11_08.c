#include <stdio.h>
#include <string.h>
#define SIZE 20
char * s_gets(char *st, int n);
char * string_in(const char * str1, const char * str2);
int main(void)
{
    char str1[SIZE];
    char str2[SIZE];
    char * result = NULL;

    printf("Please enter the first string (EOF to quit):\n");
    while(s_gets(str1, SIZE))
    {
        printf("Please enter the second string (EOF to quit):\n");
        if(!s_gets(str2, SIZE))
            break;
        if((result = string_in(str1, str2)) != NULL)
            printf("string %s exists in string %s\n", str2, result);
        else
            printf("string %s doesn't exist in string %s\n", str2, str1);
        printf("Please enter the next first string (EOF to quit):\n");
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

char * string_in(const char * str1, const char * str2)
{
    char * tmp = (char *)str1;
    while((tmp = strchr(tmp, *str2)) != NULL)
    {
        int i = 1;
        while (i < strlen(str2))
        {
            if(*(tmp + i) != *(str2 + i))
                break;
            i++;
        }
        if(i == strlen(str2))
            break;
    }
    return tmp;
}