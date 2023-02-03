#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void print_arr(int arr[], int n);
void sort_arr(int arr[], int n);
int main(void)
{
    int arr[MAX] = {0};
    int i;

    srand(time(0));
    for(i = 0; i < MAX; i++)
        arr[i] = rand() % 10 + 1; 
    print_arr(arr, MAX);
    sort_arr(arr, MAX);
    print_arr(arr, MAX);
    
    return 0;
}

void print_arr(int arr[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("%2d ", arr[i]);
        if(i % 20 == 19)
            putchar('\n');
    }
}

void sort_arr(int arr[], int n)
{
    int i, j;
    int tmp;

    for(i = 0; i < n-1; i++)
        for(j = i + 1; j < n; j++)
            if(arr[i] < arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}