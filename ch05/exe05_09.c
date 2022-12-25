#include <stdio.h>
const double FAHR_TO_CEL_SCALE = 5.0 / 9.0;
const double FAHR_TO_CEL_OFFSET = -32.0;
const double CEL_TO_KEL_OFFSET = 273.16;
void Temperatures(double fahr);
int main(void)
{
    double fahr;

    printf("This program converts fahrenheit to celsius and kelvin.\n");
	printf("Enter a temperature in degrees fahrenheit (q to quit): ");
    while (scanf("%lf", &fahr) == 1)
    {
        Temperatures(fahr);
        printf("Enter a temperature in degrees fahrenheit (q to quit): ");
    }
    printf("bye\n");

    return 0;
}

void Temperatures(double fahr)
{
    double celsius;
    double kelvin;

    celsius = FAHR_TO_CEL_SCALE * (fahr + FAHR_TO_CEL_OFFSET);
    kelvin = celsius + CEL_TO_KEL_OFFSET;
    printf("%.2f degrees fahrenheit is %.2f degrees celsius or %.2f degrees kelvin.\n",
            fahr, celsius, kelvin);
}