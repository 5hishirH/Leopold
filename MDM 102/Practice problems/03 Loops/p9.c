// A c program to calculate the sum of digits of a number.

#include<stdio.h>

int main()
{
    int n,temp,i,sum=0;

    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    for(i=1;temp!=0;i++)
    {
        sum = sum + (temp%10);
        temp = temp/10;
    }
    printf("Sum of the digits of %d = %d\n", n,sum);

    return 0;
}