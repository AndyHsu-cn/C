#include <stdio.h>
int critic(void);

int main(void)
{
    int units = 0;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while(units != 56)
        units = critic();
    printf("You must looked it up!\n");

    return 0;
}

int critic(void)
{
    int units;

    printf("No luck, my friend. Try again.\n");
    while(scanf("%d", &units) != 1)
        continue;
    
    return units;
}