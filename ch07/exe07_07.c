#include <stdio.h>
#define BASE_RATE 10.0
#define OVERTIME_HOURS 40
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25
#define TAX_BRACKET_1 300.0
#define TAX_BRACKET_2 (TAX_BRACKET_1 + 150.0)

float cal_gross(float hours);
float cal_taxes(float gross_pay);

int main(void)
{
    float hours;
    float gross_pay, taxes;

    printf("Enter number of hours worked in a week: ");
    if(scanf("%f", &hours) == 1)
    {
        gross_pay = cal_gross(hours);
        taxes = cal_taxes(gross_pay);
        printf("Gross_pay: %.2f\n"
               "    Taxes: %.2f\n"
               "  Net_pay: %.2f\n", gross_pay, taxes, gross_pay - taxes);
    }else
        printf("Invalid input...terminating.\n");

    return 0;
}

float cal_gross(float hours)
{
    float gross_pay = 0.0;

    if(hours > OVERTIME_HOURS)
        hours = OVERTIME_HOURS + OVERTIME_MULTIPLIER * (hours - OVERTIME_HOURS);
    gross_pay = hours * BASE_RATE;

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