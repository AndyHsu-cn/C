// 需要和12_05.c一起编译
#include <stdio.h>
extern int count;
static int total = 0;
void accumulate(int k);

void accumulate(int k)
{
    static int subtotal = 0;

    if(k <= 0)
    {
        printf("Loop cycle: %d\n", count);
        printf("subtotal: %d; total = %d\n", subtotal, total);
        subtotal = 0;
    }else
    {
        subtotal += k;
        total += k;
    }
}