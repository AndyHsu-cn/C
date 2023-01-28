#include <stdio.h>
int main(void)
{
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W'};
    char side_b[] = "Side B";

    printf("side_a = %p\n", side_a);
    printf("dont   = %p\n", dont);
    printf("side_b = %p\n", side_b);
    puts(dont);

    return 0;
}