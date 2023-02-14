// A c program to transpose a matrix, i.e., A’. Given, A = {{1, 2}, {2, 4}}

#include<stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column no. : ");
    scanf("%d%d", &r, &c);
    float A[r][c], B[c][r];

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    printf("Matrix :\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%.2f\t", A[i][j]);
            B[j][i] = A[i][j];
        }
        printf("\n");
    }

    printf("\nTranspose of the matrix :\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%.2f\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
