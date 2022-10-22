// A c program to check whether a number is prime or not.

#include<stdio.h>

int main()
{
    int num,count=0,f=1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(f<=num)
    {
        if(num%f==0)
        {
            count++;
        }
        f++;
    }
    if(count==2)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}