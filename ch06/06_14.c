#include <stdio.h>
int main(void)
{
    int t_ct;           // 时间项计数
    double time;
    double power_of_2;  // 2的次方
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2)
    {
        time += 1.0 / power_of_2;
        printf("time = %f when times = %d.\n", time, t_ct);
    }

    return 0;
}