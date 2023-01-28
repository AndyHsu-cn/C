#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define MAX 10
bool my_atoi(const char * str, int * ret);
int main(int argc, char * argv[])
{
    int ret;

    if(argc != 2)
    {
        puts("Usage: <program_name> <arg_1>");
    }else
    {
        if(my_atoi(argv[1], &ret))
        {
            // 命令行中字符串全是数字
            printf("ret = %d\n", ret);
        }else{
            // 命令行中字符串不全是数字
            printf("%s is not a pure integer\n", argv[1]);
        }

    }

    return 0;
}

bool my_atoi(const char * str, int * ret)
{
    bool flag = true;

    *ret = 0;
    while(*str != '\0')
    {
        if(isdigit(*str))
        {
            *ret = (*ret) * 10 + (*str - '0');
        }else{
            flag = false;
            ret = 0;
            break;
        }
        str++;
    }

    return flag;
}
