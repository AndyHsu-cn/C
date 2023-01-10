#include <stdio.h>
void large_of(double * x, double * y);
int main(void)
{
    double x, y;

	printf("Test larger_of() function\n");
	printf("=========================\n");
	printf("Enter two numbers x and y: ");
    if(scanf("%lf %lf", &x, &y) == 2)
    {
        printf("Before call larger_of() function: x = %.3f, y = %.3f\n", x, y);
        large_of(&x, &y);
        printf("After call larger_of() function: x = %.3f, y = %.3f\n", x, y);
    }else
        printf("Invalid input.\n");
    printf("Bye.\n");

    return 0;
}

void large_of(double * x, double * y)
{
    if(*x < *y)
        *x = *y;
    else
        *y = *x;
}