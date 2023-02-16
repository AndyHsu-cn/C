#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
char * s_gets(char * st, int n);
int main(void)
{
    int ch;
    FILE * fp;
    char file[SLEN];
    unsigned long count = 0;

    printf("Enter a file name: ");
    s_gets(file, SLEN);
    if((fp = fopen(file, "r")) == NULL)
    {
        printf("Can't open %s\n", file);
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF)
    {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("\n\nFile %s has %lu characters\n", file, count);

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret;
    char * find;

    ret = fgets(st, n, stdin);
    if(ret != NULL)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret;
}