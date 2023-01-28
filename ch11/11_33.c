#include <stdio.h>
#include <stdlib.h>
#define LIM 30
char * s_gets(char *st, int n);

int main(void)
{
    char number[LIM];
    char * end;
    long value;
 
    puts("Enter a number (empty line to quit):");
    while(s_gets(number, LIM) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);
        printf("Base 10 input, base 10 output: %ld, stopeed at %s (%d)\n",
            value, end, *end);
        value = strtol(number, &end, 16);
        printf("Base 16 input, base 16 output: %ld, stopeed at %s (%d)\n",
            value, end, *end);
        printf("Next number:");
    }
    puts("Bye!");

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