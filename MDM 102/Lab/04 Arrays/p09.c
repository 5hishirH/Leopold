// A c program to find both values and indexes of maximum and minimum elements of a 2D array

#include<stdio.h>

int main()
{
    int r, c, i ,j, rindex_max, cindex_max, rindex_min, cindex_min;
    printf("Enter row no. : ");
    scanf("%d", &r);
    printf("Enter column no. : ");
    scanf("%d", &c);
    float a[r][c], max, min;

    // To input values
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    // Finding min and max
    max = a[0][0];
    min = a[0][0];
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
                rindex_max = i;
                cindex_max = j;
            }
            if(a[i][j] < min)
            {
                min = a[i][j];
                rindex_min = i;
                cindex_min = j;
            }
        }
    }

    printf("\nMax = %.2f, index = %d, %d\n", max, rindex_max, cindex_max);
    printf("Min = %.2f, index = %d, %d\n", min, rindex_min, cindex_min);

    return 0;
}
