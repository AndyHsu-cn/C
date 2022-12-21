#include <stdio.h>
int main(void)
{
    const double CM_PER_INCH = 2.54;
    double height;

    printf("Enter your height (in inches): ");
    scanf("%lf", &height);
    printf("You are %.2f centimeters tall.\n", height * CM_PER_INCH);
    
    return 0;
}