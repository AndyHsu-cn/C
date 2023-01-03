#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ARTICHOKE_PRICE_PER_LB 2.05
#define BEET_PRICE_PER_LB 1.15
#define CARROT_PRICE_PER_LB 1.09

#define DISCOUNT_LIMIT 100
#define DISCOUNT_RATE 0.05

#define SHIPPING_5LB 6.50
#define SHIPPING_20LB 14.00
#define SHIPPING_OVER_20LB_RATE 0.5

void flush_input_buffer(void);
char get_choice(void);
float cal_shipping(float total_weight);
int main(void)
{
    float artichoke_weight = 0.0, beet_weight = 0.0, carrot_weight = 0.0, tmp_weight = 0.0, total_weight = 0.0;
    float artichoke_price = 0.0, beet_price = 0.0, carrot_price = 0.0, total_price = 0.0;
    float discount = 0.0;
    float shipping = 0.0;
    bool discount_flag = false;
    char option;

    printf("ABC Mail Order Grocery\n");
    while(( option =  get_choice()) != 'q')
    {
        switch(option)
        {
            case 'a':
                printf("How many pounds of artichokes would you like to add? ");
                if(scanf("%f", &tmp_weight) == 1)
                    artichoke_weight += tmp_weight;
                else
                    printf("Invalid input. Try again.\n");
                flush_input_buffer();
                break;
            case 'b':
                printf("How many pounds of beets would you like to add? ");
                if(scanf("%f", &tmp_weight) == 1)
                    beet_weight += tmp_weight;
                else
                    printf("Invalid input. Try again.\n");
                flush_input_buffer();
                break;
            case 'c':
                printf("How many pounds of carrots would you like to add? ");
                if(scanf("%f", &tmp_weight) == 1)
                    carrot_weight += tmp_weight;
                else
                    printf("Invalid input. Try again.\n");
                flush_input_buffer();
                break;
            default:
                printf("Enter a, b, c or q:\n");
                continue;
                break;
        }
    }
    
    artichoke_price = ARTICHOKE_PRICE_PER_LB * artichoke_weight;
    beet_price = BEET_PRICE_PER_LB * beet_weight;
    carrot_price = CARROT_PRICE_PER_LB * carrot_weight;
    total_weight = artichoke_weight + beet_weight + carrot_weight;
    total_price = artichoke_price + beet_price + carrot_price;
    if(total_price > DISCOUNT_LIMIT)
    {
        discount = total_price * DISCOUNT_RATE;
        discount_flag = true;
    }
    shipping = cal_shipping(total_weight);
    
    printf("\n\n");
    printf("Your order summary:\n"); 
    printf("%14s %8s %8s %8s\n", "Name", "Price", "Pounds", "Total");
    printf("%14s %8.2f %8.2f %8.2f\n", "artichoke",
            ARTICHOKE_PRICE_PER_LB, artichoke_weight, artichoke_price);
    printf("%14s %8.2f %8.2f %8.2f\n", "beet",
            BEET_PRICE_PER_LB, beet_weight, beet_price);
    printf("%14s %8.2f %8.2f %8.2f\n", "carrot",
            CARROT_PRICE_PER_LB, carrot_weight, carrot_price);
    printf("%14s %17.2f %8.2f\n", "Sub", total_weight, total_price);
    printf("_________________________________________\n");
    printf("%14s %26.2f\n", "Discount", discount);
    printf("%14s %26.2f\n", "Shipping", shipping);
    printf("%14s %26.2f\n", "Sum", total_price - discount + shipping);
    printf("%41s\n", "Bye");

    return 0;
}

void flush_input_buffer(void)
{
	while (getchar() != '\n')
		;
}

char get_choice(void)
{
    char choice;

    printf("What would you like to order?\n");
    printf("____________________________________________________\n");
    printf("%13s%13s%13s%13s\n", "a) artichokes", "b) beets", "c) carrots", "q) quit");
    printf("%13.2f%13.2f%13.2f\n", ARTICHOKE_PRICE_PER_LB, BEET_PRICE_PER_LB, CARROT_PRICE_PER_LB);
    printf("____________________________________________________\n");
    
    while(isspace(choice = getchar()))
        continue;
    flush_input_buffer();

    return choice;
}

float cal_shipping(float total_weight)
{
    float shipping = 0.0;

    if(total_weight <= 5)
        shipping = SHIPPING_5LB;
    else if(total_weight <= 20)
        shipping = SHIPPING_20LB;
    else
        shipping = SHIPPING_20LB + (total_weight - 20) * 0.5;

    return shipping;
}