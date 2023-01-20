#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROWS 3
#define COLS 4
void copy_ptrs(double * target, double * source_start, double * source_end);
void show_array2D(double (*arr)[COLS], int rows);
int main(void)
{
    double source[ROWS][COLS];
    double target[ROWS][COLS] = {0.0};
    int i, j;
    
    srand(time(0));
    for(i = 0; i < ROWS; i++)
        for(j = 0; j < COLS; j++)
            source[i][j] = (rand() % 100) + 1 / 10.0;
    printf("Source array:\n");
    show_array2D(source, ROWS);

    for(i = 0; i < ROWS; i++)
            copy_ptrs(target[i], source[i], source[i] + COLS);
    printf("\nTarget array:\n");
    show_array2D(target, ROWS);
    
    return 0;
}

// 一维数组的拷贝
void copy_ptrs(double * target, double * source_start, double * source_end)
{
    while(source_start < source_end)
    {
        *target = *source_start;
        source_start++;
        target++;
    }
}

void show_array2D(double (*arr)[COLS], int rows)
{
    int row, col;

    for(row = 0; row < rows; row++)
    {
        for(col = 0; col < COLS; col++)
            printf("%5.2f ", *(*(arr + row) + col));
        printf("\n");
    }     
}