// A c program to reverse an array.

#include<stdio.h>

int main()
{
    int array_size, i;
    printf("Enter array size : ");
    scanf("%d", &array_size);
    float a[array_size], r[array_size];
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%f", &a[i]);
    }

    printf("\nArray : \n");
    for(i = 0; i < array_size; i++)
    {
        printf("%.2f\t", a[i]);
        r[i] = a[array_size - 1 - i];
    }

    printf("\nReverse of the array : \n");
    for(i = 0; i < array_size; i++)
    {
        printf("%.2f\t", r[i]);
    }
    printf("\n");
    return 0;
}