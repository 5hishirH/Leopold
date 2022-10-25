// A c program to check whether a number is a palindrome or not

#include<stdio.h>

int main()
{
    int num,temp,r,i;
    r = 0;

    printf("Enter number: ");
    scanf("%d", &num);
    temp = num;

    for(i=1;temp!=0;i++)
    {
        r = r*10 + (temp%10);
        temp = temp/10;
    }

    printf("%d is ", num);

    if(num == r)
    {
        printf("a palindrome number.\n");
    }
    else
    {
        printf("not a palindrome number.\n");
    }

    return 0;
}
