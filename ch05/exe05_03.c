#include <stdio.h>
const int D_PER_W = 7;
int main(void)
{
    int days;

    printf("Enter a number of days (or enter 0 to quit): ");
    scanf("%d", &days);
    printf("%d days is %d week(s) and %d day(s).\n",
            days, days / D_PER_W, days % D_PER_W);

    return 0;
}
