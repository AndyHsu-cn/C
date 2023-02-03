// 与exe12_03a.c一起编译
#include <stdio.h>
#include "exe12_03a.h"

int main(void)
{
    int mode, tmp_mode;
    double distance;
    double fuel;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &tmp_mode);
    while(tmp_mode >= 0)
    {
        set_mode(&mode, tmp_mode);
        get_info(mode, &distance, &fuel);
        show_info(mode, distance, fuel);
        printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ");
        scanf("%d", &tmp_mode);
    }
    printf("Done.\n");

    return 0;
}