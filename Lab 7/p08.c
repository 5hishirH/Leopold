// A c program to calculate the sum and average of a 2D array

#include<stdio.h>

int main()
{
    int r, c, i, j;
    printf("Enter row and column no. : ");
    scanf("%d%d", &r, &c);
    float a[r][c], sum = 0, avg;
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
            sum += a[i][j];
        }
    }

    avg = sum / 4;
    printf("\nSum = %.2f, avg = %.2f\n", sum, avg);

    return 0;
}
