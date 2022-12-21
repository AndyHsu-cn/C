#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    int int_overflow = INT_MAX + 1;
    float flt_overflow = FLT_MAX * 2;
    float flt_underflow = FLT_MIN / 2;

    printf("Max int: %d \t Max int + 1 = %d\n", INT_MAX, int_overflow);
    printf("Max float = %e \t Max float * 2 = %e\n", FLT_MAX, flt_overflow);
    printf("Min float = %e \t Min float / 2 = %e\n", FLT_MIN, flt_underflow);
    
    return 0;
}