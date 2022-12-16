// A c program to find both values and indexes 
// of maximum and minimum elements of an array.

#include<stdio.h>

int main()
{
    int array_size, i, max_index = 0, min_index = 0;
    printf("Enter array size : ");
    scanf("%d", &array_size);
    float a[array_size] , max, min;
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%f", &a[i]);
    }

    max = a[0];
    min = a[0];
    for(i = 0; i < array_size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
        if(a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
    }

    printf("Max = %.2f and index = %d\n", max, max_index);
    printf("Min = %.2f and index = %d\n", min, min_index);

    return 0;
}