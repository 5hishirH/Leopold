// A c program to search a number in an array. 
// It will print the index of the element,
// if it is found. Otherwise, it will print “Not found.”

#include<stdio.h>

int main()
{
    int array_size, i, index, count = 0;
    printf("Enter array size : ");
    scanf("%d", &array_size);
    float a[array_size] , search;
    for(i = 0; i < array_size; i++)
    {
        printf("Enter a[%d] : ",i);
        scanf("%f", &a[i]);
    }

    printf("\nSearch for value : ");
    scanf("%f", &search);
    for(i = 0; i < array_size; i++)
    {
        if(a[i] == search)
        {
            index = i;
            count = 1; 
            break;
        }
    }

    if(count)
    {
        printf("Index = %d\n", index);
    }
    else
    {
        printf("Not found.\n");
    }

    return 0;
}