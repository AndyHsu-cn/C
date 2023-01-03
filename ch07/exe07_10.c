#include <stdio.h>
#define SINGLE 1
#define HEAD_OF_HOUSEHOLD 2
#define MARRIED_JOINT 3
#define MARRIED_SEPARATE 4

#define BRACKET1 17850
#define BRACKET2 23900
#define BRACKET3 29750
#define BRACKET4 14875

#define RATE1 0.15f
#define RATE2 0.28f

int main(void)
{
    int category;
    float income, taxes, bracket;

    while (1)
    {
        printf("1) Single  2) Head of Household  3) Married, Joint  4) Married Separate\n");
		printf("Enter your tax category (1-4) or 5 to quit: ");
        while(scanf("%d", &category) != 1)
        {
            while(getchar() != '\n')
                continue;
            printf("Enter your tax category (1-4) or 5 to quit: ");
        }
            
        switch (category)
        {
            case SINGLE:
                bracket = BRACKET1;
                break;
            case HEAD_OF_HOUSEHOLD:
                bracket = BRACKET2;
                break;
            case MARRIED_JOINT:
                bracket = BRACKET3;
                break;
            case MARRIED_SEPARATE:
                bracket = BRACKET4;
                break;
            case 5:
                goto DONE;
            default:
                printf("Invalid input: please enter an integer between 1 and 5.\n");
                continue;
                break;
        }
        printf("Enter your income: ");
        while (scanf("%f", &income) != 1 || income < 0)
            printf("Invalid input: please enter your income (>= 0).\n");
        if(income > bracket)
            taxes = RATE1 * bracket + (income - bracket) * RATE2;
        else
            taxes = RATE1 * income;
        printf("You will owe $%.2f in taxes.\n\n", taxes);
    }
    DONE:
    printf("Bye!\n");

    return 0;
}