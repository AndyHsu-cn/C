#include <stdio.h>
#define LOW 1
#define HIGH 100
void flush_buffer(void);
int main(void)
{
    int guess;
    int low, high;
    int ch;

    low = LOW;
    high = HIGH;
    guess = (low + high) / 2;
    printf("Pick an integer from %d to %d. I will try to guess it.\n", LOW, HIGH);
	printf("Respond with a y if my guess is right, with a h if it's\n");
	printf("too high and an l if it's too low.\n");
	printf("Uh...is your number %d?\n", guess);
    while ((ch = getchar()) != 'y')
    {
        if(ch == 'h')
            high = guess - 1;
        else if(ch == 'l')
            low = guess + 1;
        else
        {
			printf("Invalid valid input. Try again.\n");
            flush_buffer();
			continue;
		}
        guess = (low + high) / 2;
        printf("Uh...is your number %d?\n", guess);
        flush_buffer();
    }
    printf("I knew I could do it!\n");

    return 0;
}

void flush_buffer(void)
{
    while(getchar() != '\n')
        continue;
}