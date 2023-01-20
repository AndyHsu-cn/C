#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void make_ar(double ar[], int  n);
void show_ar(double ar[], int n);
double max_difference(double ar[], int n);
int main(void)
{
    double ar[SIZE];

    make_ar(ar, SIZE);
    show_ar(ar, SIZE);
    printf("The max_difference is %.2f\n", max_difference(ar, SIZE));

    return 0;
}

void make_ar(double ar[], int  n)
{
    int i;

    srand(time(0));
    for(i = 0; i < n; i++)
        ar[i] = rand() % 100 / 10.0;
}

void show_ar(double ar[], int n)
{
    int i;
    
    for(i = 0; i < n; i++)
        printf("%.2f ", ar[i]);
    putchar('\n');
}

double max_difference(double ar[], int n)
{
    double max, min;
    int i;

    for(i = 0, max = min = ar[0]; i < n; i++)
    {
        if(ar[i] > max)
            max = ar[i];
        if(ar[i] < min)
            min = ar[i];
    }

    return max - min;
}