#include <stdio.h>
#include <stdbool.h>
bool isPrime(unsigned int num);
int main(void)
{
    unsigned int limit;
    unsigned int i;

    printf("Primes: this program prints all primes less than or equal to any positive integer.\n");
	printf("Enter a positive integer: \n");
    while(scanf("%u", &limit) ==  1)
    {
        for (i = 2; i <= limit; i++)
        {
            if(isPrime(i))
                printf("%u ", i);
        }
        printf("\nEnter a positive integer: \n");
    }
    

    return 0;
}

bool isPrime(unsigned int num)
{
    bool isPrime = true;
    int i;

    for(i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    return isPrime;
}