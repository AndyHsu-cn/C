#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;

    shoe = 9.0;
    foot = SCALE * 9.0 + ADJUST;
    printf("Shoe size (men's)     foot length\n");
    printf("%17.1f %9.2f inches\n", shoe, foot);

    return 0;
}