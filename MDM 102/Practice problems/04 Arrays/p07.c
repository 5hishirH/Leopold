// A c program to sort an array.

#include<stdio.h>

int main()
{
    int arraySize, i, j;
    printf("How many numbers do you want to sort? : ");
    scanf("%d", &arraySize);
    float a[arraySize], temp;

    for(i = 0; i < arraySize; i++)
    {
        printf("Enter a[%d] : ", i);
        scanf("%f", &a[i]);
    }

    for(j = 0; j < arraySize; j++)
    for(i = 1; i < arraySize; i++)
    {
        if(a[i] > a[i - 1])
        {
            temp = a[i];
            a[i] = a[i - 1];
            a[i - 1] = temp;
        }
    }

    printf("\nDescending :\n");
    for(i = 0; i < arraySize ; i++)
    {
        printf("%.2f\t", a[i]);
    }
    printf("\n");

    return 0;
}
