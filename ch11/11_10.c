#include <stdio.h>
char * s_gets(char *st, int n)
{
    // 参数与返回值与fgets类似
    // 除了如果输入中有回车符，会将'\n'\替换为'\0'
    // 如果输入内容过长，会清空缓冲区
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