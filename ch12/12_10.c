// 与12_09.c一同编译
#include <stdio.h>
unsigned int rand0(void);
void srand1(unsigned int seed);

int main(void)
{
    int count;
    unsigned int seed;
    
    printf("Please enter your choice for seed.\n");
    while(scanf("%u", &seed) == 1)
    {
        srand1(seed);           // 设置种子
        for(count = 0; count < 5; count++)
            printf("%d\n", rand0());
        printf("Please enter your next seed.\n");
    }
    printf("Done!\n");

    return 0;
}