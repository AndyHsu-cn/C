#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char * argv[])
{
    double base, power;
    double result;
    if (argc != 3)
	{
		puts("Usage: <program_name> <arg1 base:double> <arg2 power:int>");
	}else
    {
        base = strtod(argv[1], NULL);
        power = strtod(argv[2], NULL);
        printf("%f ^ %f = %f\n", base, power, pow(base, power));
    }
    return 0;
}