// 1- x^2/2! + x^4/4! - x^6/6! +....

#include<stdio.h>
#include<math.h>

int main()
{
    int i, n;
    float m, fact, term, sum = 0, x, k;
    
    printf("Enter x : ");
    scanf("%f", &x);
    printf("Enter n : ");
    scanf("%d", &n);

    for(i = 1, k = 0; i <= n; i++, k = k + 2)
    {
        // Factorial
        for(m = 1, fact = 1; m <= k; m++)
        {
            fact = fact*m;
        }

        // Term
        term = pow(x, k)/fact;

        // Addition or substraction
        if(i%2 == 0)
        {
            sum = sum - term;
        }
        else
        {
            sum = sum + term;
        }
    }

    printf("\nSum = %f\n", sum);

    return 0;
}