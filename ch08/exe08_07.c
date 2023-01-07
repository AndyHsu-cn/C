#include <stdio.h>
#include <ctype.h>
#define BASE_RATE1 8.75
#define BASE_RATE2 9.33
#define BASE_RATE3 10.00
#define BASE_RATE4 11.20

#define OVERTIME_HOURS 40
#define OVERTIME_MULTIPLIER 1.5

#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25
#define TAX_BRACKET_1 300.0
#define TAX_BRACKET_2 (TAX_BRACKET_1 + 150.0)

int get_first(void);
int get_choice(void);
float cal_gross(float hours, float rate);
float cal_taxes(float gross_pay);

int main(void)
{
    float hours, rate;
    float gross_pay, taxes;
    int rate_option;

    while ((rate_option = get_choice()) != 'q' && rate_option != EOF)
    {
        switch(rate_option)
        {
            case 'a':
                rate = BASE_RATE1;
                break;
            case 'b':
                rate = BASE_RATE2;
                break;
            case 'c':
                rate = BASE_RATE3;
                break;
            case 'd':
                rate = BASE_RATE4;
            default:
                printf("Invalid input. Try again.\n\n");
                continue;
        }
        printf("Enter number of hours worked in a week: ");
        scanf("%f", &hours);
        gross_pay = cal_gross(hours, rate);
        taxes = cal_taxes(gross_pay);
        printf("Gross_pay: %.2f\n"
               "    Taxes: %.2f\n"
               "  Net_pay: %.2f\n", gross_pay, taxes, gross_pay - taxes);
        printf("\nEnter next desired pay rate or action:\n");
    }
    printf("Bye!\n");
    
    return 0;
}

int get_first(void)
{
    int ch;

    while(isspace(ch = getchar()))
        continue;
    if(ch != EOF)
        while(getchar() != '\n')
            continue;

    return ch;
}

int get_choice(void)
{
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("a) $%.2f/hr 				b) $%.2f/hr\n", BASE_RATE1, BASE_RATE2);
    printf("c) $%.2f/hr 				d) $%.2f/hr\n", BASE_RATE3, BASE_RATE4);
    printf("q) quit \n");
    printf("*****************************************************************\n");
    
    return get_first();
}

float cal_gross(float hours, float rate)
{
    float gross_pay = 0.0;

    if(hours > OVERTIME_HOURS)
        hours = OVERTIME_HOURS + OVERTIME_MULTIPLIER * (hours - OVERTIME_HOURS);
    gross_pay = hours * rate;

    return gross_pay;
}

float cal_taxes(float gross_pay)
{
    float taxes = 0.0;
    if(gross_pay <= TAX_BRACKET_1)
        taxes = TAX_RATE1 * gross_pay;
    else if(gross_pay <= TAX_BRACKET_2)
        taxes = TAX_BRACKET_1 * TAX_RATE1 + TAX_RATE2 * (gross_pay - TAX_BRACKET_1);
    else
        taxes = TAX_BRACKET_1 * TAX_RATE1 + TAX_RATE2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE3 * (gross_pay - TAX_BRACKET_2);

    return taxes;
}