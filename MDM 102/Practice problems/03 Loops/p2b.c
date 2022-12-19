#include<stdio.h>

int main()
{
    int n, i, t, sum = 0;
    printf("Enter term no.: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        t = 2*i - 1;
        sum = sum + t*t;
    }
    printf("Sum = %d", sum);

    return 0;
}