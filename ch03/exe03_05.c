#include <stdio.h>
int main(void)
{
    const double SEC_PER_YEAR = 3.156e7; 
    int age;

    printf("Enter age (in years): ");
    scanf("%d", &age);
    printf("You are %.f seconds old!\n", age * SEC_PER_YEAR);

    return 0;
}