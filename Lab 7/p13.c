// A c program to add two matrices. 
// If A and B are two matrices, the sum of these matrices, C = A + B

#include<stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column of a matrix : ");
    scanf("%d%d", &r, &c);
    float a[r][c], b[r][c], sum[r][c], fact;

    // To input 1st matrix
    printf("Enter values for 1st matrix : \n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // To input 2nd matrix
    printf("\nEnter values for 2nd matrix\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter b[%d][%d] : ", i, j);
            scanf("%f", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nSum of the two matrices :\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%.2f\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
