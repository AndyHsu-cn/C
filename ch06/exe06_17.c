#include <stdio.h>
int main(void)
{
    const float PRINCIPLE = 1000000.0f;
    const float INTEREST = 0.08;
    const float SPENDING = 100000.0f;
    int years = 0;
    float balance = PRINCIPLE;

    while (balance > 0)
    {
        balance *= (1 + INTEREST);
        balance -= SPENDING;
        years++;
    }
    printf("After %d years, Chuckie is in the red with a balance of"
		   " %.2f USD.\n", years, balance);

    return 0;
}