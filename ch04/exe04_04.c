#include <stdio.h>
int main(void)
{
    const float INCHES_PER_FEET = 12;
    float height;
    char name[20];

    printf("What's your name: ");
    scanf("%s", name);
    printf("What's your height (in inches): ");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall\n", name, height / INCHES_PER_FEET);

    return 0;
}