#include <stdio.h>
#define DUNBAR 150
int main(void)
{
    int friends = 5;
    int week = 0;

    while(friends < DUNBAR)
    {
        friends = 2 * (friends - week - 1);
        week++;
        printf("Week %3d: %3d\n", week, friends);  
    }

    return 0;
}