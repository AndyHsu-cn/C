#include <stdio.h>
#include <string.h>
#define  MAX 20
int main(void)
{
    char firstname[MAX];
    char lastname[MAX];

    printf("Enter your first and last name: ");
    scanf("%s %s", firstname, lastname);
    printf("%s %s\n", firstname, lastname);
    printf("%*zd %*zd\n", (int)strlen(firstname), strlen(firstname),
                          (int)strlen(lastname), strlen(lastname));
    printf("%s %s\n", firstname, lastname);
    printf("%-*zd %-*zd\n", (int)strlen(firstname), strlen(firstname), 
                            (int)strlen(lastname), strlen(lastname));
    
    return  0;
}