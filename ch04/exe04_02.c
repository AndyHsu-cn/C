#include <stdio.h>
#include <string.h>
#define MAX 22
int main(void)
{
    char firstname[MAX/2];
    char lastname[MAX/2];
    char name[MAX] = "";

    printf("Enter your firstname and lastname (e.g.: John Doe)\n");
    scanf("%10s %10s", firstname, lastname);
    printf("\"%s %s\"\n", firstname, lastname);

    strcat(name, firstname);
    strcat(name, " ");
    strcat(name, lastname);
    printf("\"%20s\"\n", name);
    printf("\"%-20s\"\n", name);
    printf("\"%*s\"\n", strlen(name) + 3, name);

    return 0;
}