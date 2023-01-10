#include <stdio.h>
void sort_variables(double *x, double *y, double *z);
void inter_change(double *x, double *y);
int main(void)
{
    double x, y, z;

    printf("Test sort_variables():\n");
	printf("Enter three numbers x, y and z:\n");
    while(scanf("%lf %lf %lf", &x, &y, &z) == 3)
    {
        printf("Before calling sort_variables:\n");
		printf("x = %.3f, y = %.3f, z = %.3f\n", x, y, z);
		sort_variables(&x, &y, &z);
		printf("After calling sort_variables:\n");
		printf("x = %.3f, y = %.3f, z = %.3f\n", x, y, z);
        printf("Enter three numbers x, y and z:\n");
    }
    printf("Bye.\n");

    return 0;
}

void sort_variables(double *x, double *y, double *z)
{
    int temp;

    if(*x < *y)
    {
        if(*x < *z)
        {
            if(*y < *z)
            // x < y < z    
                ;
            else{
            // x < z < y
                inter_change(y, z);
            }
        }else{
            // z < x < y
            inter_change(x, z);
            inter_change(y, z);
        }
    }else{
        if(*x > *z)
        {
            if(*y > * z)
            {
                // x > y > z
                inter_change(x, z);

            }else{
                // x > z > y
                inter_change(x, y);
                inter_change(y, z);
            }
        }else{
            // z > x > y
            inter_change(x, y);
        }

    }
}

void inter_change(double *x, double *y)
{
    double temp;

    temp = *x;
    *x = *y;
    *y = temp;
}