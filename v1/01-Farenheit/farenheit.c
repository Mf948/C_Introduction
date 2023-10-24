#include <stdio.h>

int main(void)
{
    /* prompt the user to enter a temperature value in Fahrenheit */
    printf("Please enter a temperature value in Fahrenheit: ");

    float temperatureF; // identifier
    // variable floating point number 3.7 single precision.
    // double type is double precision.
    scanf("%f", &temperatureF);

    float temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;

    printf("The corresponding temperature in Celsius is %f C.\n ", temperatureC);

    return 0;
}






