#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 20
char * s_gets(char * arr,  int n);
int main(void)
{
    char file_name[SIZE];
    FILE * fp;
    long int pos;
    int ch;

    printf("Enter a filename: ");
    s_gets(file_name, SIZE);
    if((fp = fopen(file_name, "r")) == NULL)
    {
        printf("Can't open file %s\n", file_name);
        exit(EXIT_FAILURE);
    }
    printf("Enter a position: ");
    while(scanf("%ld", &pos) == 1 && pos >= 0)
    {
        fseek(fp, pos, SEEK_SET);
        while((ch = getc(fp)) != '\0' && ch != '\n')
            putchar(ch);
        printf("\nEnter next position: ");
    }
    puts("Done.");

    return 0;
}

char * s_gets(char * arr,  int n)
{
    char * ret;
    char * find;

    ret = fgets(arr, n, stdin);
    if(ret)
    {
        if((find = strchr(arr, '\n')))
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret;
}