/**
 * 1. 用户自定义函数，整体功能类似puts
 * 2. 给出待打印字符个数
*/
#include <stdio.h>
int put2(const char * string)
{
    int count = 0;

    while(*string)
    {
        putchar(*string++);
        count++;
    }
    putchar('\n');

    return count;
}