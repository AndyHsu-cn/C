// 与exe12_02b.c一起编译
#include <stdio.h>
#define METRIC 0
#define US 1

static int mode;
static double distance;
static double fuel;

void set_mode(int new_mode)
{
    if(new_mode == METRIC || new_mode == US)
        mode = new_mode;
    else
        printf("Invalid mode specified, Mode %d (%s) used.\n",
                mode, mode == METRIC ? "METRIC": "US");
}

void get_info(void)
{
    if(mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel);
    }else{
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel);
    }
}

void show_info(void)
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