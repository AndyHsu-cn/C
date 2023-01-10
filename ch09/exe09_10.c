#include <stdio.h>
void to_binary(unsigned long n, int base);
int main(void)
{
    unsigned long number;
    int base;

    printf("Test to_base_n() function\n");
	printf("Enter an integer in base 10 and a base to convert to: ");
    while(scanf("%lu %d", &number, &base) == 2)
    {
        printf("Binary equivalent: ");
        to_binary(number, base);
        putchar('\n');
        printf("Enter an integer in base 10 and a base to convert to: ");
    }
    printf("Done.\n");

    return 0;
}

void to_binary(unsigned long n, int base)
{
    int r;
    
    if(base < 2 || base > 10){
        printf("Error: base must be between 2 and 10.");
        return;
    } 
    r = n % base;
    if(n >= base)
        to_binary(n / base, base);
    putchar('0' + r);
}