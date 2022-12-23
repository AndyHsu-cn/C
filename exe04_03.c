#include <stdio.h>
int main(void)
{
    float value;

    printf("Enter a float value: ");
    scanf("%f", &value);
    printf("a. The input is %.1f or %.1e\n", value, value);
    printf("b. The input is %+.3f or %.3e\n", value, value);

    return 0;
}