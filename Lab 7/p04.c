// A c program to count the frequency
// of a number in an array.

#include<stdio.h>

int main()
{
    int array_size, i, frequency = 0;
    printf("Array size : ");
    scanf("%d", &array_size);
    float a[array_size], search;
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%f", &a[i]);
    }

    printf("\nFind the frequency of : ");
    scanf("%f", &search);
    for ( i = 0; i < array_size; i++)
    {
        if(a[i] == search)
        {
            frequency++;
        }
    }

    printf("Frequency of %.2f is %d.\n", search, frequency);

    return 0;
}