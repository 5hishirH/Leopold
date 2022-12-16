// A c function that takes an array as a parameter and returns the average of that array
#include<stdio.h>

float average(float p[], int n)
{
    int i;
    float sum = 0;

    for ( i = 0; i < n; i++ )
    {
        sum+=p[i];
    }

    return sum/n;
}

int main()
{
    int array_size, i;
    printf("How many of number do you want to find average? : ");
    scanf("%d", &array_size);
    float arr[array_size], avg;

    for ( i = 0; i < array_size; i++)
    {
        printf("a[%d] : ", i);
        scanf("%f", &arr[i]);
    }

    avg = average(arr, array_size);
    printf("Average = %.2f\n", avg);

    return 0;
}