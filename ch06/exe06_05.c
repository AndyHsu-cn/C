#include <stdio.h>
#define SPACE  ' '
int main(void)
{
    char ch;
    int i, j;

    printf("Enter a letter: ");
    scanf("%c", &ch);

    for (i = 0; i < (ch - 'A' + 1); i++)
    {
        // 打印空格
        for(j = 0; j < ch - 'A' - i ; j++)
            printf("%c", SPACE);
        // 升序打印字母
        for (j = 0; j <= i; j++)
            printf("%c", 'A' + j);
        // 降序打印字母
        for (j = 0; j < i; j++)
            printf("%c", 'A' + i - j - 1);
        printf("\n");
    }

    return 0;
}