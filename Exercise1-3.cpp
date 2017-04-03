#include <stdio.h>

void main()
{
    /* theconversion of Fahrenheit degrees to celsius degrees using a step of 20 with a range from 0 to 300*/
    float celsius, fahrenheit;
    int upper, lower, step;
    upper = 300;
    lower = 0;
    step = 20;
    fahrenheit = (float)lower;
    printf("%s\n\t%3s\t%6s\n", "Conversion from Fahrenheit to Celsius", "F", "C");
    while (fahrenheit <= upper)
    {
        celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);
        printf("\t%3.0f\t%6.1f\n", fahrenheit, celsius);
        fahrenheit += step;
    }
}
