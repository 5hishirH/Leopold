// A c program to multiply a matrix by a factor

#include<stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column : ");
    scanf("%d%d", &r, &c);
    float a[r][c], fact;

    // To input matrix
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    printf("Enter a factor to multiply : ");
    scanf("%f", &fact);

    // Print matrix
    printf("\nMatrix :\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%.2f\t", a[i][j]);
            a[i][j]*=fact;
        }
        printf("\n");
    }

    // After multiplying
    printf("\nMultiplied by %.2f :\n", fact);
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
