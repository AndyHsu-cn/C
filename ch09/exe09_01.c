#include <stdio.h>
double min(double x, double y);
int main(void)
{
    double x, y;

    printf("Enter two doubles (non-double input to quit): ");
    while(scanf("%lf %lf", &x, &y) == 2)
    {
        printf("The minimum of %.3f and %.3f is %.3f.\n", x, y, min(x,y));
        printf("Enter next two doubles (non-double input to quit): ");
    }
    printf("Bye.\n");

    return 0;
}

double min(double x, double y)
{
    return (x < y ? x: y);
}