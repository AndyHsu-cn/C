#include <stdio.h>
#include <stdlib.h>
double power(double n, int p);
int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power to which\n");
    printf("the number will be raised, Enter q to quit.\n");
    while (scanf("%lf %d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power of %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");

    return 0;
}

double power(double n, int p)
{
    double xpow;
    if(p == 0)
    {
        if(n == 0)
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
        xpow = 1.0;
    }else
        xpow = n * power(n, abs(p) - 1);
    if(p < 0)
        xpow = 1 / xpow;

    return xpow;
}