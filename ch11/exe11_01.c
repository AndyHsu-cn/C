#include <stdio.h>
#include <string.h>
#define SIZE 10
char * sgetnchar(char *array, int n);

int main(void)
{
    char arr[SIZE];

    printf("Please enter %d characters.\n", SIZE);
    sgetnchar(arr, SIZE - 1);
    arr[SIZE - 1] = '\0';
    puts(arr);
    
    return 0;
}

char * sgetnchar(char *array, int n)
{
    int i = 0;

    while(i < n)
    {
        *(array + i) = getchar();
        i++;
    }
    return array;
}