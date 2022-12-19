// A c program to calculate the sum and average of an array.

#include<stdio.h>

int main()
{
    int array_size, i;
    printf("How many of numbers do you want to find the average? : ");
    scanf("%d", &array_size);
    float a[array_size], sum = 0, avg;
    for(i = 0; i < array_size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%f", &a[i]);
        sum = sum + a[i];
    }

    avg = sum / array_size;
    printf("The average is %.2f\n", avg);

    return 0;
}