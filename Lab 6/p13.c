#include<stdio.h>

int main()
{
    int num,a=0,temp,p;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0)
    {
        p = temp%10;
        a = a + (p*p*p);
        temp = temp/10;
    }

    if(num == a)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;

}
