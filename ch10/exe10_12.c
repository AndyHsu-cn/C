#include <stdio.h>
#define MONTHS 12
#define YEARS 5
void print_annual_average(int year, int month, const float rain[year][month]);
void print_monthly_averages(int year, int month, const float rain[year][month]);
int main(void)
{
    const float rain[YEARS][MONTHS] = 
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    printf(" YEAR RAINFALL (inches)\n");
    print_annual_average(YEARS, MONTHS, rain);
    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");
    print_monthly_averages(YEARS, MONTHS, rain);
    printf("\n");

    return 0;
}

void print_annual_average(int year, int month, const float rain[year][month])
{
    int y, m;
    float subtot, total;

    for(y = 0, total = 0; y < year; y++)
    {
        // 计算每年12个月总降水量并打印
        for(m = 0, subtot = 0; m < month; m++)
            subtot += rain[y][m];
        printf("%5d %17.1f\n", 2010 + y, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / year);
}

void print_monthly_averages(int year, int month, const float rain[year][month])
{
    int y, m;
    float subtot, total;

    for(m = 0; m < month; m++)
    {
        // 计算确定月的5年总降水量并打印
        for(y = 0, subtot = 0; y < year; y++)
            subtot += rain[y][m];
        printf("%4.1f ", subtot / YEARS);
    }
}