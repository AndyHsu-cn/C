#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 5
void double_Nx5_int_array(int (*array)[COLS], int rows);
void print_Nx5_int_array(int (*array)[COLS], int rows);
int main(void)
{
    int array[ROWS][COLS] = {
        { 2,  5,  6,  9,  1},
        {23,  1,  5, 66, 54},
        { 9, 73, 23, 39,  2}
    };

    srand(time(NULL));
    printf("Original array:\n");
    print_Nx5_int_array(array, ROWS);
    double_Nx5_int_array(array, ROWS);
    printf("Doubled array:\n");
    print_Nx5_int_array(array, ROWS);

    return 0;
}

void double_Nx5_int_array(int (*array)[COLS], int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            array[i][j] *= 2;
}

void print_Nx5_int_array(int (*arr)[COLS], int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < COLS; j++)
            printf("%5d ", arr[i][j]);
        printf("\n");
    }       
}