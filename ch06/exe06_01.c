#include <stdio.h>
int main(void)
{
    const int SIZE = 26;
    int i;
    char letters[SIZE];

    for (i = 0; i < SIZE; i++)
        letters[i] = 'a' + i;
    for (i = 0; i < SIZE; i++)
        printf("%c", letters[i]);
    printf("\n");
     
    return 0;
}