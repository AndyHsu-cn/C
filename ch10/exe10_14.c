#include <stdio.h>
#define ROWS 3
#define COLS 5
void input_dbl_array(int rows, int cols, double array[rows][cols]);
double compute_average(int len, double array[len]);
double compute_array_average(int rows, int cols, double array[rows][cols]);
double largest_value(int rows, int cols, double array[rows][cols]);
void print_dbl_array(int rows, int cols, double array[rows][cols]);
int main(void)
{
    double array[ROWS][COLS];
    int i;

    input_dbl_array(ROWS, COLS, array);
    print_dbl_array(ROWS, COLS, array);

    for(i = 0; i < ROWS; i++)
        printf("Row %d: %f\n", i, compute_average(COLS, array[i]));
    printf("%dx%d array average: %5.2f\n", ROWS, COLS, compute_array_average(ROWS, COLS, array));
    printf("%dx%d array largest elements: %5.2f\n", ROWS, COLS, largest_value(ROWS, COLS, array));

    return 0;
}

void input_dbl_array(int rows, int cols, double array[rows][cols])
{
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%lf", &array[i][j]);
}

double compute_average(int len, double array[len])
{
    double total = 0.0;
    int i;

    for(i = 0; i < len; i++)
        total += array[i];

    return (total / len);
}

double compute_array_average(int rows, int cols, double array[rows][cols])
{
    double total = 0.0;
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            total += array[i][j];
    return (total / (rows * cols));
}

double largest_value(int rows, int cols, double array[rows][cols])
{
    double max = array[0][0];
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            if(array[i][j] > max)
                max = array[i][j];
    
    return max;
}

void print_dbl_array(int rows, int cols, double array[rows][cols])
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%5.2f ", array[i][j]);
        printf("\n");
    }
}