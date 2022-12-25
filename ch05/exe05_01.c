#include <stdio.h>
const int M_PER_H = 60;
int main(void)
{
    int time;           // 用户输入的时间（分钟为单位）
    int hour, min;

    printf("Enter an amount of time in minutes: ");
    scanf("%d", &time);
    while(time > 0)
    {
        hour = time / M_PER_H;
        min = time % M_PER_H;
        printf("%d minute(s) is %d hour(s) and %d minute(s).\n",
                time, hour, min);
        printf("Enter an amount of time in minutes: ");
        scanf("%d", &time);
    }
    printf("Done!\n");

    return 0;
}