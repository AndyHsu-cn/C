#include <stdio.h>
void copy_ptrs(double * target, double * source_start, double * source_end);
int main(void)
{
    double source[7] = {2.4, 5.9, 7.8, 1.5, 3.3, 5.3, 6.8};
	double target[3] = {0.0};
    int i;

    copy_ptrs(target, source + 3 - 1, source + 5);
    for(i = 0; i < 3; i++)
        printf("%3.1f ", target[i]);
    printf("\nBye.\n");

    return 0;
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