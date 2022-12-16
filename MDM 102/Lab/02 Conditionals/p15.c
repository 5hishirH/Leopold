/* A c program to implement a menu-based temperature conversion using switch. */

#include<stdio.h>

int main()
{
    float c,f;
    int op;
    printf("Enter the option: [ (1) Fahrenheit to Celsius  (2) Celsius to Fahrenheit ]\t");
    scanf("%d", &op);
    switch(op)
    {
        case 1:
            printf("\nFahrenheit temp: ");
            scanf("%f", &f);
            c = 5*(f - 32)/9;
            printf("Celsius temp: %.2f\n", c);
            break;

        case 2:
            printf("\nCelsius temp: ");
            scanf("%f", &c);
            f = (9*c/5)+32;
            printf("Fahrenheit temp: %.2f\n", f);
            break;

        default:
            printf("Invalid input.");
            break;
    }
    return 0;
}
