#include <stdio.h>
#define MAX 255
int main(void)
{
    char input[MAX];
    int i = 0;

    printf("Enter a line to reverse:\n");
    while(scanf("%c", &input[i]) && input[i] != '\n')
        ++i;
    for(--i;i >= 0; i--)
        printf("%c", input[i]);
    printf("\n");
    
    return 0;
}