#include<stdio.h>

int main()
{
    int n, i, term = 0, diff=1;
    printf("Enter term : ");
    scanf("%d", &n);
    printf("Series :\n");
    while(term < n)
    {
        term = term + diff;
        diff = diff + 2;
        printf("%d\t", term);
    }

    printf("\n");
    return 0;
}