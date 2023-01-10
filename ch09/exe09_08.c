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
    double pow = 1.0;
    int i;

    if(p != 0)
    {
        for (i = 1; i <= abs(p); i++)
        pow *= n;
    }else{
        if(n == 0.0)
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
        pow = 1.0;
    }

    if(p < 0)
        pow = 1 / pow;
    
    return pow;
}