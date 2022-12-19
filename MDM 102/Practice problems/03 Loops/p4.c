#include<stdio.h>

int main()
{
    int n,i,r;
    r = 1;
    scanf("%d", &n);
    if (n == 0) {
        printf("0! = 1");
    }
    else {
        for(i=1;i<=n;i++)
        {
            r = r*i;
        }
        printf("%d! = %d", n,r);
    }

    return 0;
}
