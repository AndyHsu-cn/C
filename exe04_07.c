#include <stdio.h>
#include <float.h>
int main(void)
{
    float flt_one_third = 1.0 / 3.0;
    double dbl_one_third = 1.0 / 3.0;

    printf("FLT_DIG = %-10d  DBL_DIG = %-10d\n", FLT_DIG, DBL_DIG);
    printf("%20.6f %20.6f\n", flt_one_third, dbl_one_third);
    printf("%20.12f %20.12f\n", flt_one_third, dbl_one_third);
    printf("%20.16f %20.16f\n", flt_one_third, dbl_one_third);

    return 0;
}