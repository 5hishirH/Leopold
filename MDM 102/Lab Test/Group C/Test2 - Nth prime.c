#include<stdio.h>

int main()
{
    int n, prime, i, count, j, fact;
    printf("Enter term no : ");
    scanf("%d", &n);
    for(i = 1; count != n; i++)
    {
        fact = 0;
        for(j = 1; j <= i; j++)
        {
            if(i%j == 0)
            {
                fact++;
            }
        }
        if(fact == 2)
        {
            prime = i;
            count++;
        }
    }

    printf("%dth prime = %d\n", n, prime);
    return 0;
}