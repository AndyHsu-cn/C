#include <stdio.h>
double cubed(double n);
int main(void)
{
    double input;
	
    printf("Enter a number to cube: ");
    scanf("%lf", &input);
    printf("%.3f cubed is %.3f\n", input, cubed(input));
    return 0;
}

double cubed(double n)
{
    return (n * n * n);
}