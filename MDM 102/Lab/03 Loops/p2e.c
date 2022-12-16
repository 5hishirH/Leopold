#include<stdio.h>

int main()
{
    int n, i, so = 0, se = 0, sum;
    printf("Enter term no.: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
       if(i%2 == 0)
       {
            se = se + i;
       }
       else
       {
            so = so + i;
       }
    }
    sum = so - se;
    printf("Sum = %d", sum);

    return 0;
}
