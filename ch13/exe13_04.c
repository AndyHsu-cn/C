#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81

int main(int argc, char * argv[])
{
    FILE * fp;
    int ch;
    int i;
    
    if(argc < 2)
    {
        fprintf(stderr, "Usage: %s file1 file2 ...\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    for(i = 1; i < argc; i++)
    {
        if((fp = fopen(argv[i], "r")) == NULL)
        {
            printf("Can't open %s\n", argv[i]);
            continue;
        }
        while((ch = getc(fp)) != EOF)
            putc(ch, stdout);
        fclose(fp);
    }
    
   
   

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