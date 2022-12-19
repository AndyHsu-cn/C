#include <stdio.h>
int main(void)
{
    int toes;
    int toes_twice;
    int toes_squared;

    toes = 10;
    toes_twice = 2 * toes;
    toes_squared = toes * toes;

    printf("toes: %d\n", toes);
    printf("toes_twice: %d\n", toes_twice);
    printf("toes_squared: %d\n", toes_squared);

    return 0;
}