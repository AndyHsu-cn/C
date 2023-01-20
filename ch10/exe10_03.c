#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10
void make_ar(int ar[], int  n);
void show_ar(int ar[], int n);
int max_int(int ar[], int n);
int main(void)
{
    int ar[SIZE];

    make_ar(ar, SIZE);
    show_ar(ar, SIZE);
    printf("The maximum of is: %d\n", max_int(ar, SIZE));

    return 0;
}

void make_ar(int ar[], int  n)
{
    int i;

    srand(time(0));
    for(i = 0; i < n; i++)
        ar[i] = rand() % 100;
}

void show_ar(int ar[], int n)
{
    int i;
    
    for(i = 0; i < n; i++)
        printf("%3d ", ar[i]);
    putchar('\n');
}

int max_int(int ar[], int n)
{
    int i, max;

    for(i = 0, max = ar[0]; i < n; i++)
        if(ar[i] > max)
            max = ar[i];

    return max;
}