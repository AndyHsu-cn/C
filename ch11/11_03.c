#include <stdio.h>
#define MSG "I'm specila"
int main(void)
{
    char ar[] = MSG;
    const char * pt = MSG;
    
    printf("address of \"I'm specila\": %p\n", "I'm specila");
    printf("address of ar: %p\n", ar);
    printf("address of pt: %p\n", pt);
    printf("address of MSG: %p\n", MSG);
    printf("address of \"I'm specila\": %p\n", "I'm specila");   

    return 0;
}