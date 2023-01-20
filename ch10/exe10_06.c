#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void make_ar(double ar[], int  n);
void show_ar(double ar[], int n);
void reverse_array(double ar[], int n);

int main(void)
{
    double ar[SIZE];

    make_ar(ar, SIZE);
    show_ar(ar, SIZE);
    reverse_array(ar, SIZE);
    show_ar(ar, SIZE);
    
    return 0;
}

void make_ar(double ar[], int  n)
{
    int i;

    srand(time(0));
    for(i = 0; i < n; i++)
        ar[i] = (rand() + 1)% 100 / 10.0;
}

void show_ar(double ar[], int n)
{
    int i;
    
    for(i = 0; i < n; i++)
        printf("%.2f ", ar[i]);
    putchar('\n');
}

void reverse_array(double ar[], int n)
{
    int i;
    double temp;

    for(i = 0; i <= n / 2; i++)
    {
        temp = ar[i];
        ar[i] = ar[n - 1 - i];
        ar[n - 1- i] = temp;
    }
}