#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 4096
#define SLEN 81
char * s_gets(char *st, int n);
void append(FILE * src, FILE * dst);
int main(void)
{
    FILE * fa;
    FILE * fs;
    char file_app[SLEN];
    char file_src[SLEN];
    int files = 0;
    int ch;

    puts("Enter name of destination file:");
    s_gets(file_app, SLEN);
    if((fa = fopen(file_app, "a+")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", file_app);
        exit(EXIT_FAILURE);
    }
    if(setvbuf(fa, NULL, _IOFBF, BUFSIZE) != 0)
    {
        fputs("Can't create output buffer\n", stderr);
        exit(EXIT_FAILURE);
    }
    puts("Enter name of first source file (empty line to quit):");
    while(s_gets(file_src, SLEN) && file_src[0] != '\0')
    {
        if(strcmp(file_src, file_app) == 0)
            fputs("Can't append file to itself\n", stderr);
        else if((fs = fopen(file_src, "r")) == NULL)
            fprintf(stderr, "Can't open %s\n", file_src);
        else
        {
            if(setvbuf(fs, NULL, _IOFBF, BUFSIZE) != 0)
            {
                fputs("Can't create input buffer\n", stderr);
                continue;
            }
            append(fs, fa);
            if(ferror(fs) != 0)
                fprintf(stderr, "Error in reading file %s.\n", file_src);
            if(ferror(fa) != 0)
                fprintf(stderr, "Error in writing file %s.\n", file_app);
            fclose(fs);
            files++;
            printf("File %s appended.\n", file_src);
            puts("Next file (empty line to quit):");
        }
    }
    printf("Done appending. %d files appended.\n", files);
    rewind(fa);
    printf("%s contents:\n", file_app);
    while((ch = getc(fa)) != EOF)
        putchar(ch);
    puts("\n\nDone displaying.");
    fclose(fa);

    return 0;
}

char * s_gets(char *st, int n)
{
    char * ret_val;
    char * find;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != EOF)
                continue;
    }

    return ret_val;    
}

void append(FILE * src, FILE * dst)
{
    size_t bytes;

    static char temp[BUFSIZE];
    
    while((bytes = fread(temp, sizeof(char), BUFSIZE, src)) > 0)
        fwrite(temp, sizeof(char), bytes, dst);
}