#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 10
#define SIZE 20
char * s_gets(char * arr, int n);
int main(void)
{
    FILE * fp;
    char file_name[NUM][SIZE];
    int key, ch;
    int index = 0;
    int count[NUM] = {0};

    puts("Enter a character to analysis:");
    key = getchar();
    while(getchar() != '\n')
        continue;
    printf("Enter file_name: ");
    while((s_gets(file_name[index], SIZE)) != NULL)
    {
        if((fp = fopen(file_name[index], "r")) != NULL)
        {
            while((ch = getc(fp)) != EOF)
            {
                if(ch == key)
                    count[index]++;
            }
            index++;
        }
        printf("Enter next file_name: ");
    }
    printf("Character count for %c in ...\n", key);
		for (int i = 0; i < index; i++)
			printf("%s : %d\n", file_name[i], count[i]);
    
    return 0;
}

char * s_gets(char * arr, int n)
{
    char * ret;
    char * find;

    ret = fgets(arr, n, stdin);
    if(ret)
    {
        find = strchr(arr, '\n');
        if(find)
            *find = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret;
}