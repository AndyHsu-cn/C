#include <stdio.h>
#define ROWS 3
#define COLS 5
void copy_arr2d(int rows, int cols, double target[rows][cols], double source[rows][cols]);
void show_arr2d(int rows, int cols, double arr[rows][cols]);
int main(void)
{
    double source[ROWS][COLS] = {
        {4.3, 5.7, 2.1, 6.6, .8},
		{5.6, 23.5, 73.2, 12.3, 123},
	    {22.1, 35.3, 6.35, 0.132, 11.1}
    };
	double target[ROWS][COLS] = {0.0};

    copy_arr2d(ROWS, COLS, target, source);
    show_arr2d(ROWS, COLS, target);

    return 0;
}

void copy_arr2d(int rows, int cols, double target[rows][cols], double source[rows][cols])
{
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            target[i][j] = source[i][j];
}

void show_arr2d(int rows, int cols, double arr[rows][cols])
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%7.3f ", arr[i][j]);
        printf("\n");
    }       
}