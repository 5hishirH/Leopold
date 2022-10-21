#include<stdio.h>

int main()
{
    int n,i,sum,t;
    sum = 0;
    t = 1;
    printf("Enter term no.: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum + t;
        t = t + 4;
    }
    printf("Sum = %d", sum);

    return 0;
}
