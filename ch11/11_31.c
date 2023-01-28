#include <stdio.h>
int main(int argc, char * argv[])
{
    int count;

    printf("The command line has %d arguments:\n", argc);
    for(count = 0; count < argc; count++)
        printf("arguments %d: %s\n", count, argv[count]);

    return 0;
}