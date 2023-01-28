#include <stdio.h>
#include <ctype.h>
#define SIZE 10
char * sgetnchar(char *array, int n);

int main(void)
{
    char arr[SIZE];

    printf("Please enter no nore than %d characters.\n", SIZE);
    sgetnchar(arr, SIZE);
    puts(arr);
    
    return 0;
}

char * sgetnchar(char *array, int n)
{
    int i = 0;

    while(i < n - 1 && !isspace((*(array + i) = getchar())))
        i++;
    array[i] = '\0';

    return array;
}