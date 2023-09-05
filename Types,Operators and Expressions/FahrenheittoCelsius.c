#include <stdio.h>

int main()
{
    int fahrenheit, celsius;
    int lower, upper, step;

    lower = 0;   // Lower limit of the temperature table
    upper = 300; // Upper limit
    step = 20;   // Step size

    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("Fahrenheit\tCelsius\n");

    fahrenheit = lower;
    while (fahrenheit <= upper)
    {
        celsius = 5 * (fahrenheit - 32) / 9;
        printf("%3d\t\t%6d\n", fahrenheit, celsius);
        fahrenheit += step;
    }

    return 0;
}
