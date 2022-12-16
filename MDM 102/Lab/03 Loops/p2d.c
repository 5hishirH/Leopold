#include<stdio.h>

int main()
{
    float n, i, sum = 0;
    printf("Enter term no.: ");
    scanf("%f", &n);
    for(i=1;i<=n;i++)
    {
        sum = sum + (1/i);
    }
    printf("Sum = %f", sum);

    return 0;
}