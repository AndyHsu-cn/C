#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int upper = 0;
    int lower = 0;
    int ch;

    while((ch = getchar()) != EOF)
    {
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
    }
    printf("Upper = %d, Lower = %d\n", upper, lower);

    return 0;
}