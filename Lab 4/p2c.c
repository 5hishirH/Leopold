#include<stdio.h>

int main()
{
    int n, i, r = 1;
    printf("Enter term no.: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        r = r*4*i*i;
    }
    printf("Result = %d", r);

    return 0;
}