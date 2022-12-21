#include <stdio.h>
int main(void)
{
    int ch;

    printf("Enter a ascii: ");
    scanf("%d", &ch);
    printf("The character for %d is %c\n", ch, ch);
    
    return 0;
}