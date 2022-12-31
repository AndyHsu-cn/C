#include <stdio.h>
int main(void)
{
    float series1 = 0, series2 = 0;
    int times;
    int sign = 1;
    int i;

    printf("Enter a number of terms to sum: ");
    
    while(scanf("%d", &times) == 1 && times > 0)
    {
        for(i = 1; i <= times; i++, sign = -sign)
        {
            series1 += (float)1 / i;
            series2 += (float)1 / i * sign;
        }
        printf("The %dth partial sum for serie 1 is %.5f\n", times, series1);
        printf("The %dth partial sum for serie 2 is %.5f\n", times, series2);
        printf("Enter next number of terms to sum: ");
    }

    return 0;
}