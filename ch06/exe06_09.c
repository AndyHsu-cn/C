#include <stdio.h>
float calculate(float a, float b);
int main(void)
{
    float a, b;

    printf("Enter two floating-point numbers (enter non-numeric to quit): ");
    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n",
                a, b, a, b, calculate(a, b));
        printf("Enter two floating-point numbers (enter non-numeric"
               " to quit): ");
    }
    printf("Done!\n");

    return 0;
}
float calculate(float a, float b)
{
    return (a - b) / (a * b);
}