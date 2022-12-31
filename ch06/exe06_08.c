#include <stdio.h>
int main(void)
{
    float a, b;

    printf("Enter two floating-point numbers (enter non-numeric to quit): ");
    while(scanf("%f %f", &a, &b) == 2)
    {
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n", a, b, a, b, (a - b) / (a * b));
        printf("Enter two floating-point numbers (enter non-numeric"
               " to quit): ");
    }
    printf("Done!\n");

    return 0;
}