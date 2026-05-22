#include <stdio.h>

int main()
{
    float kilometers, miles, meters, centimeters;
    float celsius, fahrenheit, kelvin;

    // Distance input
    printf("Enter distance in Kilometers: ");
    scanf("%f", &kilometers);

    // Conversions
    miles = kilometers * 0.621371;
    meters = kilometers * 1000;
    centimeters = kilometers * 100000;

    // Output distance conversions
    printf("\nDistance Conversions:\n");
    printf("Miles = %.2f\n", miles);
    printf("Meters = %.2f\n", meters);
    printf("Centimeters = %.2f\n", centimeters);

    // Temperature input
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Temperature conversions
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273.15;

    // Output temperature conversions
    printf("\nTemperature Conversions:\n");
    printf("Fahrenheit = %.2f\n", fahrenheit);
    printf("Kelvin = %.2f\n", kelvin);

    return 0;
}
