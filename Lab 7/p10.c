// A c program to calculate the sum of diagonal elements of a matrix

#include<stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column : ");
    scanf("%d%d", &r, &c);
    float a[r][c], sum = 0;

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
            if(i == j)
            {
                sum += a[i][j];
            }
        }
    }

    printf("\nMatrix :\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%.2f\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of the diagonal is %.2f\n", sum);
}
