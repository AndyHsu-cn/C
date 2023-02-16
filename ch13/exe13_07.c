#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 256
char * f_getline(char * st, int n, FILE * fp);
int main(int argc, char * argv[])
{
    FILE * fa;
    FILE * fb;
    char tmp[SIZE];
    int line = 1;

    if(argc != 3)
    {
        fprintf(stderr, "Usage: %s file_a file_b\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if((fa = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if((fb = fopen(argv[2], "r")) == NULL)
    {
        fprintf(stderr, "Can't open file %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    // 文件打开，以方式a开始读取
    printf("Method a\n");
    while(!feof(fa) || !feof(fb))
    {
        if(!feof(fa))
        {
            if(f_getline(tmp, SIZE, fa))
                printf("Line %d %s: %s\n", line, argv[1], tmp);
        }
        if(!feof(fb))
        {
            if(f_getline(tmp, SIZE, fb))
            printf("Line %d %s: %s\n", line, argv[2], tmp);
        }
        line++;
    }
    // 文件打开，以方式b开始读取
    rewind(fa);
    rewind(fb);
    line = 1;
    printf("Method b\n");
    while(!feof(fa) || !feof(fb))
    {
        bool flag = false;
        if(!feof(fa))
        {
            if(f_getline(tmp, SIZE, fa))
            {
                printf("Line %d: ", line);
                printf("%s\t", tmp);
                flag = true;
            }    
        }
        if(!feof(fb))
        {
            if(f_getline(tmp, SIZE, fb))
            {
                if(!flag)
                {
                    printf("Line %d: ", line);   
                    printf("%s\t", tmp);
                    flag = true;
                }   
            }
        }
        if(flag)
            printf("\n");
        line++;
    }
    fclose(fa);
    fclose(fb);
    printf("Done.\n");

    return 0;
}

char * f_getline(char * st, int n, FILE * fp)
{
    char * ret;
    char * find;
    
    ret = fgets(st, n, fp);
    if(ret)
    {
        find = strchr(st, '\n');
        if(find)
            *find = '\0';
    }

    return ret;
}