#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2,ten - two);
    printf("Doint it wrong: ");
    // 遗漏2个参数
    printf("%d minus %d is %d\n", ten);
    
    return 0;
}