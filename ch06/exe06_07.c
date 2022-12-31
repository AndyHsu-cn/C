#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20
int main(void)
{
    char words[MAX_SIZE];
    int i;

    printf("Enter a string: ");
    scanf("%s", words);

    for (i = strlen(words) - 1; i>=0; i--)
        printf("%c", words[i]);
    printf("\n");

    return 0;
}