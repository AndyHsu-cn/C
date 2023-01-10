#include <stdio.h>
void chline(char ch, int cols, int lines);
int main(void)
{
    char ch;
    int i, j;

    printf("Enter a character and two integers: ");
    while(scanf("%c %d %d", &ch, &i, &j) == 3)
    {
        chline(ch, i, j);
        printf("Enter next character and two integers: ");
        while(getchar() != '\n')
            continue;
    }
    printf("Bye.\n");
    
    return 0;
}

void chline(char ch, int cols, int lines)
{
    int i, j;

    for(i = 0; i < lines; i++)
    {
        for(j = 0; j < cols; j++)
            putchar(ch);
        putchar('\n');
    }
}