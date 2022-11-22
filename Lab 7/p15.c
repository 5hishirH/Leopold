// A c program to multiply two matrices. 
// If A and B are two matrices, the product of these matrices, C = A * B. 
// Given, A={{1, 2}, {1, 2}} and B = {{2, 1}, {2, 1}}.

#include<stdio.h>

int main()
{
    int m, n, p, q, i, j, k;
    label1:
    printf("Enter row and column of a matrix : ");
    scanf("%d%d", &m, &n);
    printf("Enter row and column of another matrix : ");
    scanf("%d%d", &p, &q);

    // Check if the matrices are mutiplicable
    if(n != p)
    {
        printf("Invalid input.\n(The column no. of the 1st matrix should be equal to the row no. of the 2nd matrix.)\n");
        goto label1;
    }

    float a[m][n], b[p][q], r[m][q];


    // Input values of 1st matrix
    printf("\nEnter values for the 1st matrix :\n");
    for( i = 0; i < m; i++)
    for( j = 0; j < n; j++)
    {
        printf("Enter a[%d][%d] : ", i, j);
        scanf("%f", &a[i][j]);
    }
    
    // Input values of 2nd matrix
    printf("\nEnter values for the 2nd matrix :\n");
    for( i = 0; i < p; i++)
    for( j = 0; j < q; j++)
    {
        printf("Enter a[%d][%d] : ", i, j);
        scanf("%f", &b[i][j]);
    }

    // Print 1st matrix
    printf("\n1st matrix :\n");
    for( i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    // Print 2nd matrix
    printf("\n2nd matrix :\n");
    for( i = 0; i < p; i++)
    {
        for( j = 0; j < q; j++)
        {
            printf("%.2f\t", b[i][j]);
        }
        printf("\n");
    }

    // operation
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < q; j++)
        {
            r[i][j] = 0;
            for(k = 0; k < n; k++)  // n and p are equal
            {
                r[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // print the multiplication
    printf("\nMultiplication of two matrices:\n");
    for( i = 0; i < m; i++)
    {
        for( j = 0; j < q; j++)
        {
            printf("%.2f\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}