// 同12_11.c一同编译
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12_12.h"

int main(void)
{
    int dice;       // 骰子个数
    int roll;       // 所有骰子点数之和
    int sides;      // 骰子面数
    int status;

    srand((unsigned int)time(0));
    printf("Enter the number of sides per die, 0 to stop.\n");
    while(scanf("%d", &sides) == 1 && sides > 0)
    {
        printf("How many dice?\n");
        if((status = scanf("%d", &dice)) != 1)
        {
            if(status == EOF)
                break;          // 遇到ctrl + d 程序退出循环
            else
            {                   // 遇到非法输入， 处理非法输入并等待继续输入
                printf("Your should have entered an integer.");
                printf(" Let's begin again.\n");
                while(getchar() != '\n')
                    continue;
                printf("How many sides? Enter 0 to stop.\n");
                continue;
            }
        }
        // sides和dice输入都正确
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
        printf("How many sides? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}