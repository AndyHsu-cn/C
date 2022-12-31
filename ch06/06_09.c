#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    long num;
    long sum = 0L;
    bool input_is_good;

    printf("Please enter an integer to be summed (q to quit): ");
    input_is_good = scanf("%ld", &num);
    // 误用=导致无限循环
    while (input_is_good)
    {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}