// A c program to count the number of digits of a number.

#include<stdio.h>

int main()
{
    int n,temp,i,count=0;

    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    for(i=1;temp!=0;i++)
    {
        temp = temp/10;
        count++;
    }
    printf("Number of digits of %d = %d\n", n,count);

    return 0;
}