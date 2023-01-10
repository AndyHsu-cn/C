#include <stdio.h>
long Fibonacci(int index);
int main(void)
{
    long fibonacci;
    int index;

    printf("Test Fibonacci() function\n");
	printf("Enter an integer index: ");
    while(scanf("%d", &index) == 1 && index > 0)
    {
        printf("Fibonacci #%d = %ld\n", index, Fibonacci(index));
		printf("Enter an integer index: ");
    }
    printf("Bye.\n");

    return 0;
}

long Fibonacci(int index)
{
    // 输入index（从1开始），返回Fibonacci数
    int f1 = 1;
    int f2 = 1;
    int i = 2;
    
    while(i < index)
    {
        f1 = f1 + f2;
        f2 = f1 + f2;
        i = i + 2;
    }
    if(index % 2 == 1)
        return f1;
    else
        return f2;
}