// A c program to copy an array to another array.

#include<stdio.h>

int main()
{
    int array_size, i;
    printf("Array size : ");
    scanf("%d", &array_size);
    float a[array_size], b[array_size];
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%f", &a[i]);
    }

    printf("Array a : \n");
    for(i = 0; i < array_size; i++)
    {
        printf("a[%d] : %.2f\n", i, a[i]);
    }

    for(i = 0; i < array_size; i++)
    {
        b[i] = a[i];
    }

    printf("\nArray b:\n");
    for(i = 0; i < array_size; i++)
    {
        printf("b[%d] : %.2f\n", i, b[i]);
    }
}