#include <stdio.h>
#define MAX 20
int main(void)
{
    char firstname[MAX];
    char lastname[MAX];

    printf("Enter your firstname and lastname (e.g.: John Doe)\n");
    scanf("%s %s", firstname, lastname);
    printf("%s,%s\n", firstname, lastname);

    return 0;
}