#include<stdio.h>

int main()
{
    int num,r,i;
    r = 0;

    printf("Enter number: ");
    scanf("%d", &num);
    printf("Reverse of %d = ", num);

    for(i=1;num!=0;i++)
    {
        r = r*10 + (num%10);
        num = num/10;
    }

    printf("%d\n", r);

    return 0;
}

