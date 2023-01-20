#include <stdio.h>
#define LEN 5
void copy_arr(double target[], double source[], int n);
void copy_ptr(double * target, double * source, int n);
void copy_ptrs(double * target, double * source_start, double * source_end);
int main(void)
{
    double source[LEN] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[LEN] = {0.0};
    double target2[LEN] = {0.0};
    double target3[LEN] = {0.0};

    copy_arr(target1, source, LEN);
    copy_ptr(target2, source, LEN);
    copy_ptrs(target3, source, source + LEN);
    for(int i = 0; i < LEN; i++)
        printf("i = %d, %.2f  %.2f  %.2f\n",  i, target1[i], target2[i], target3[i]);
    printf("Bye.\n");

    return 0;
}

void copy_arr(double target[], double source[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        target[i] = source[i];
}

void copy_ptr(double * target, double * source, int n)
{
    for(int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

void copy_ptrs(double * target, double * source_start, double * source_end)
{
    while(source_start < source_end)
    {
        *target = *source_start;
        source_start++;
        target++;
    }
}