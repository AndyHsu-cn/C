#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void make_ar(double ar[], int  n);
void show_ar(double ar[], int n);
int max_double(double ar[], int n);
int main(void)
{
    double ar[SIZE];

    make_ar(ar, SIZE);
    show_ar(ar, SIZE);
    printf("The maximum of index is %d\n", max_double(ar, SIZE));

    return 0;
}

void make_ar(double ar[], int  n)
{
    int i;

    srand(time(0));
    for(i = 0; i < n; i++)
        ar[i] = rand() % 10 / 10.0;
}

void show_ar(double ar[], int n)
{
    int i;
    
    for(i = 0; i < n; i++)
        printf("%.2f ", ar[i]);
    putchar('\n');
}

// 返回最大元素所在的下标
int max_double(double ar[], int n)
{
    int i, pos;

    for(pos = 0, i = 1; i < n; i++)
        if(ar[i] > ar[pos])
            pos = i;
        
    return pos;
}