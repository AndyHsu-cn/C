#include <stdio.h>
int imax();         // 不推荐，旧式函数声明

int main(void)
{
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));

    return 0;
}

int imax(n, m)      // 不推荐，旧式函数定义
int n, m;
{
    return (n > m ? n: m) ;
}