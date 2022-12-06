// A c function that takes a number as a parameter and returns 1 if it is prime,
// otherwise, it returns 0. It prints 1 for 23 and 0 for 22.

#include<stdio.h>

int prime(int num)
{
    int fact = 0, i;
    for ( i = 1; i <= num; i++ )
    {
        if(num%i == 0)
        {
            fact++;
        }
    }
    return fact == 0;
}

int main()
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    if ( prime(number) )
    {
        printf("Prime number\n");
    }
    else
    {
        printf("Not a prime number\n");
    }

    return 0;
}