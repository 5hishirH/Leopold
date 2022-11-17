// 3, 7, 15, 31, .....Nth

#include<stdio.h>
#include<math.h>

int main()
{
    int  count, i, n, term = 3;

    scanf("%d", &n);
    printf("Series :\n3\t");
    for(count = 1, i = 2; count < n; count++, i++)
    {
        term = term + pow(2, i);
    }

    printf("%d th term = %d\n", n, term);

    return 0;
}