#include <stdio.h>
#include <ctype.h>
int get_first(void);
double get_num(void);
int get_choice(void);
int main(void)
{
    int choice;
    double num1, num2;

    while((choice = get_choice())!= 'q')
    {
        switch(choice)
        {
            case 'a':
                printf("Enter first number: ");
                num1 = get_num();
                printf("Enter second number: ");
                num2 = get_num();
                printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
                break;;
            case 's':
                printf("Enter first number: ");
                num1 = get_num();
                printf("Enter second number: ");
                num2 = get_num();
                printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
                break;;
            case 'm':
                printf("Enter first number: ");
                num1 = get_num();
                printf("Enter second number: ");
                num2 = get_num();
                printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
                break;;
            case 'd':
                printf("Enter first number: ");
                num1 = get_num();
                printf("Enter second number: ");
                while((num2 = get_num()) == 0)
                    printf("Enter a number other than 0: ");
                printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
                break;;
            default:
                printf("I do not recognize that input. Try again.");
                break;
        }
    }
    printf("Bye.\n");

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

double get_num(void)
{
    double num;
    int ch;

    while(scanf("%lf", &num) != 1)
    {
        while((ch = getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3: "); 
    }

    while(getchar() != '\n')
        continue;

    return num;
}

int get_choice(void)
{
    printf("Enter the operation of your choice:\n");
	printf("a. add            s. subtract\n");
	printf("m. multiply       d. divide\n");
	printf("q. quit\n");

    return get_first();
}