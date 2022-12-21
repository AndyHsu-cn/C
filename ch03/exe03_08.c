#include <stdio.h>
int main(void)
{
    double PINTS_PER_CUP = 0.5;
	double OUNCES_PER_CUP = 8.0;
	double TBS_PER_CUP = 2 * OUNCES_PER_CUP;
	double TSP_PER_CUP = 3 * TBS_PER_CUP;
    double cups;

    printf("Enter an amount in cups: ");
    scanf("%lf", &cups);
    printf("%f cup is equivalent to:\n", cups);
    printf("%f pints\n", cups * PINTS_PER_CUP);
    printf("%f ounces\n", cups * OUNCES_PER_CUP);
    printf("%f tablespoons\n", cups * TBS_PER_CUP);
    printf("%f teaspoons\n", cups * TSP_PER_CUP);
    
    return 0;
}