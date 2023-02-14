#include<stdio.h>

int main()
{
    int n,i,sum;
    sum = 0;
    printf("Enter term no.: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum + i*(2*i+1)*(2*i+2);
    }
    printf("Sum = %d", sum);

    return 0;
}
