// 1, 4, 9, 16, ....N

#include<stdio.h>

int main()
{
    int n, i = 1, term = 0;
    printf("Enter term : ");
    scanf("%d", &n);
    printf("Series :\n");
    while(term != n)
    {
        term = i*i;
        printf("%d\t", term);
        i++;
    }

    printf("\n");

    return 0;
}
