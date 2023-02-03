// 同exe12_07b.c一同编译
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "exe12_07b.h"

int main(void)
{
    int dice;       // 骰子个数
    int roll;       // 所有骰子点数之和
    int sides;      // 骰子面数
    int status;
    int sets;

    srand((unsigned int)time(0));
    printf("Enter the number of sets; enter q to stop: ");
    while(scanf("%d", &sets) == 1 && sets > 0)
    {
        printf("How many sides and how many dice? ");
        if((status = scanf("%d %d", &sides, &dice)) != 2)
        {
            if(status == EOF)
                break;          // 遇到ctrl + d 程序退出循环
            else
            {                   // 遇到非法输入， 处理非法输入并等待继续输入
                printf("Your should have entered two integers.");
                printf(" Let's begin again.\n");
                while(getchar() != '\n')
                    continue;
                printf("Enter the number of sets; enter q to stop: ");
                continue;
            }
        }
        // sides和dice输入都正确
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for(int i = 0; i < sets; i++)
        {
            printf("%2d ", roll_n_dice(dice, sides));
            if(i % 15 == 14)
                putchar('\n');
        }
        putchar('\n');     
        printf("How many sets? Enter q to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}