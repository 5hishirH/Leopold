#include<stdio.h>

int main()
{
    int n,i,sum,a,b,c;
    sum = 1;
    a = 0;
    b = 1;
    printf("Enter term no.: ");
    scanf("%d", &n);
    n = n - 2;
    for(i=1;i<=n;i++)
    {
        c = a + b;
        sum = sum + c;
        a = b;
        b = c;
    }
    printf("Sum = %d", sum);

    return 0;
}
