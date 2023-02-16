#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
char * s_gets(char * st, int n);

int main(void)
{
    FILE * in , * out;
    int ch;
    char name[LEN];
    char new_name[LEN];
    int count = 0;

    printf("Enter a file to reduce: ");
    s_gets(name, LEN);
    if((in = fopen(name, "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", name);
        exit(EXIT_FAILURE);
    }
    strncpy(new_name, name, LEN - 5);
    new_name[LEN - 5] = '\0';
    strcat(new_name, ".red");
    if((out = fopen(new_name, "w")) == NULL)
    {
        fprintf(stderr, "Can't create output file \"%s\"\n", new_name);
        exit(3);
    }
    while((ch = getc(in)) != EOF)
        if(count++ % 3 == 0)
            putc(ch, out);
    
    if(fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in closing files\n");

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