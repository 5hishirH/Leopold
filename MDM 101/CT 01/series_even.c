// 3, 7, 15, 31, .....Nth

#include<stdio.h>

int main()
{
    int term = 3, n, i, count;

    printf("Enter term no. : ");
    scanf("%d", &n);
    
    for(count = 1, i = 4; count < n; count++, i*=2)
        term = term + i;

    printf("%d th term is %d\n", n, term);

    return 0;
}