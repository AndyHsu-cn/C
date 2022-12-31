#include <stdio.h>
int main(void)
{
    int n = 0;

    while (n++  < 3);               // 注意该行有个多余的分号
        printf("n is  %d\n",  n);
    printf("That's all this program does\n");
}