// c function that takes two numbers as parameters and returns the sum of them

#include<stdio.h>

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    float p, q, result;
    printf("Enter two numbers : ");
    scanf("%f%f", &p, &q);

    result = sum(p, q);
    printf("Sum = %.2f\n", result);

    return 0;
}