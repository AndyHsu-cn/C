// 与exe12_03b.c一起编译
#include <stdio.h>
#define METRIC 0
#define US 1

void set_mode(int * mode, int tmp_mode)
{
    if(tmp_mode != METRIC && tmp_mode != US)
        printf("Invalid mode specified, Mode %d (%s) used.\n",
                *mode, *mode == METRIC ? "METRIC": "US");
    else
        *mode = tmp_mode;
}

void get_info(int mode, double * distance, double * fuel)
{
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", fuel);
    }else{
        printf("Enter distance traveled in miles: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", fuel);
    }
}

void show_info(int mode, double distance, double fuel)
{
    double efficiency;

	if (mode == METRIC)
	{
		efficiency = fuel / distance * 100;
		printf("Fuel consumption is %.2f liters per 100 kilometers.\n", efficiency);
	}
	else if (mode == US)
	{
		efficiency = distance / fuel;
		printf("Fuel consumption is %.2f miles per gallon.\n", efficiency); 
	}
}