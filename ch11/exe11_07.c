#include <stdio.h>
#include <string.h>
#define MAX 10
char * my_strncpy(char * dst, char * src, size_t n);
char * s_gets(char * str, int n);
int main(void)
{
    char src[MAX];
    char dst[MAX];
    int cnt = 0;

    printf("Enter a string as source:");
    while(s_gets(src, MAX))
    {
        printf("How many characters do you want to copy? (maximum %d) ", MAX);
        scanf("%d", &cnt);
        if(cnt > MAX)
            cnt = MAX;
        while(getchar() != '\n')
            continue;
        my_strncpy(dst, src, cnt);
        printf("Src : %s\n", src);
        printf("Copy: %s\n", dst);
        printf("Enter another string as source:");
    }
    printf("Bye!\n");
      
    return 0;
}

char * my_strncpy(char * dst, char * src, size_t n)
{
    char * p = dst;
    int ind = 0;

    while(*src != '\0' && ind < n)
    {
        *p = *src;
        p++;
        src++;
        ind
        ++;
    }
    if(ind < n)
        *p = '\0';

    return dst;
}

char * s_gets(char * str, int n)
{
    char * ret = fgets(str, n, stdin);
    
    if(ret)
    {
        char * find_n = strchr(str, '\n');
        
        if(find_n)
            *find_n = '\0';
        else
            while(getchar() != '\n')
                continue;
    }

    return ret;
}