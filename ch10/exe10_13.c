#include <stdio.h>
#define ROWS 3
#define COLS 5
void input_Nx5_dbl_array(double (*array)[COLS], int rows);
double compute_average(double array[], int len);
double compute_Nx5_array_average(double (*array)[COLS], int rows);
double largest_value(double (*array)[COLS], int rows);
void print_Nx5_dbl_array(double (*array)[COLS], int rows);
int main(void)
{
    double array[ROWS][COLS];
    int i;

    input_Nx5_dbl_array(array, ROWS);
    print_Nx5_dbl_array(array, ROWS);

    for(i = 0; i < ROWS; i++)
        printf("Row %d: %f\n", i, compute_average(array[i], COLS));
    printf("Nx5 array average: %5.2f\n", compute_Nx5_array_average(array, ROWS));
    printf("Nx5 array largest elements: %5.2f\n", largest_value(array, ROWS));

    return 0;
}

void input_Nx5_dbl_array(double (*array)[COLS], int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            scanf("%lf", &array[i][j]);
}

double compute_average(double array[], int len)
{
    double total = 0.0;
    int i;

    for(i = 0; i < len; i++)
        total += array[i];

    return (total / len);
}

double compute_Nx5_array_average(double (*array)[COLS], int rows)
{
    double total = 0.0;
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            total += array[i][j];
    return (total / (rows * COLS));
}

double largest_value(double (*array)[COLS], int rows)
{
    double max = array[0][0];
    int i, j;

    for(i = 0; i < rows; i++)
        for(j = 0; j < COLS; j++)
            if(array[i][j] > max)
                max = array[i][j];
    
    return max;
}

void print_Nx5_dbl_array(double (*array)[COLS], int rows)
{
    int i, j;

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < COLS; j++)
            printf("%5.2f ", array[i][j]);
        printf("\n");
    }
}