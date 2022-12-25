#include <stdio.h>
const float CM_PER_IN = 2.54;           // 1英寸的厘米数
const int IN_PER_FT = 12;               // 1英尺的英寸数
int main(void)
{
    double height_cm;                   // 身高（单位厘米）
    double height_in;                   // 身高（单位英寸）
    int feet;
    double inch;
    
    printf("Enter a height in centimeters: ");
    scanf("%lf", &height_cm);
    while (height_cm > 0)
    {
        height_in = height_cm / CM_PER_IN;
        feet = (int)height_in / IN_PER_FT;
        inch =  height_in  - feet * IN_PER_FT;
        printf("%.1lf cm = %d feet, %.1lf inches\n", height_cm, feet, inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%lf", &height_cm);
    }
    printf("bye\n");


    return 0;
}