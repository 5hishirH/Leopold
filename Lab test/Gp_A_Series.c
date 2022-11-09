// 1- x^2/2! + x^4/4! - x^6/6! +....

#include<stdio.h>
#include<math.h>

int main()
{
    int i, n;
    float m, fact, term, sum = 0, x, k = 0;
    printf("Enter x : ");
    scanf("%f", &x);
    printf("Enter n : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        m = 1;
        fact = 1;
        while(m <= k)
        {
            fact = fact*m;
            m++;
        }
        term = (pow(x, k))/fact;
        if(i%2 == 0)
        {
            sum = sum - term;
        }
        else
        {
            sum = sum + term;
        }
        k = k + 2;
    }

    printf("Sum = %f\n", sum);

    return 0;
}