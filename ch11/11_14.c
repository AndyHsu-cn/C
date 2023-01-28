/**
 * 1. 用户自定义函数，整体功能类似puts
 * 2. 不自动添加换行符
*/
#include <stdio.h>
void put1(const char * string)
{
    while(*string)
        putchar(*string++);
}