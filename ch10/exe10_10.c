#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LEN 10
void make_array(double arr[], int len);
void add_arrays(double target[], double source1[], double source2[], int len);
void show_array(double arr[], int len);
int main(void)
{
    double source1[LEN];
    double source2[LEN];
    double target[LEN] = {0.0};

    srand(time(NULL));
    make_array(source1, LEN);
    make_array(source2, LEN);
    printf("Source1 array:\n");
    show_array(source1, LEN);
    printf("Source2 array:\n");
    show_array(source2, LEN);
    add_arrays(target, source1, source2, LEN);
    printf("Target array:\n");
    show_array(target, LEN);
    
    return 0;
}

void make_array(double arr[], int len)
{
    int i;

    for(i = 0; i < LEN; i++)
        arr[i] = (rand() % 100 + 1) / 10.0;
}

void add_arrays(double target[], double source1[], double source2[], int len)
{
    int i;

    for(i = 0; i < len; i++)
        target[i] = source1[i] + source2[i];
}

void show_array(double arr[], int len)
{
    int i;

    for(i = 0; i < len; i++)
        printf("%5.2f ", arr[i]);
    printf("\n");
}