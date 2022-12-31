#include <stdio.h>
int main(void)
{
    int n = 0;

    // 只有测试条件后的单独语句（简单句或复合句）才是循环的部分
    // 这里糟糕的代码创建了一个无限循环
    while (n  < 3)
        printf("n is  %d\n",  n);
        n++;
    printf("That's all this program does\n");
}