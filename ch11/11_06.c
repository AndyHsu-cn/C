#include <stdio.h>
#define SLEN 5
int main(void)
{
    char words[SLEN];

    puts("Enter a string, please.");
    gets(words);
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");

    return 0;
}