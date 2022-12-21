#include <stdio.h>
int main(void)
{
    const double H20_MASS = 3.0e-23;
    const double GRAMS_H20_PER_QUART = 950.0;
    double quarts;

    printf("Enter an amount of water (in quarts): ");
    scanf("%lf", &quarts);
    printf("There are %.0f molecules in %.2f quarts of water.\n",
            quarts * GRAMS_H20_PER_QUART / H20_MASS, quarts);

    return 0;
}