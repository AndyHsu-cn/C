#include <stdio.h>
#define STOP 0
int main(void)
{
    int even_cnt, odd_cnt;
    int even_sum, odd_sum;
    float even_avg, odd_avg;
    int input;

    even_cnt = odd_cnt = 0;
    even_sum = odd_sum = 0;
    printf("Enter integers (0 to stop):\n");
    while (scanf("%d", &input) == 1)
    {
        if(input == STOP)
            break;
        if(input % 2 == 0)
        {
            even_cnt++;
            even_sum += input;
        }else{
            odd_cnt++;
            odd_sum += input;
        }
        printf("Enter integers (0 to stop):\n");
    }
    printf("        even      odd\n");
    printf("cnt %8d %8d\n", even_cnt, odd_cnt);
    printf("avg %8.1f %8.1f\n", even_cnt != 0 ? even_sum / even_cnt: 0.0f,
            odd_cnt != 0 ? odd_sum / odd_cnt: 0.0f);

    return 0;
}