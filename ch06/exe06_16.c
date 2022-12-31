#include  <stdio.h>
int main(void)
{
    const float PRINCIPLE = 100.0;
    const float DAPHNE_INTEREST = 0.1f;
    const float DEIRDRE_INTEREST = 0.05f;
    float daphne_balance, deirdre_balance;
    int years = 0;

    daphne_balance = deirdre_balance = PRINCIPLE;
    while (daphne_balance >= deirdre_balance)
    {
        daphne_balance += PRINCIPLE * DAPHNE_INTEREST;
        deirdre_balance *= (1 + DEIRDRE_INTEREST);
        years++;
    }
    printf("After %d years, Daphne's investment is worth $%.2f and "
		   "Deirdre’s investment is worth $%.2f.\n", years, daphne_balance, deirdre_balance);


    return 0;
}