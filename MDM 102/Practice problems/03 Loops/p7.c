// A c program to print the prime numbers within a range.

#include<stdio.h>

int main()
{
    int sr,r,f,count;

    printf("[Enter the range]\nFrom: ");
    scanf("%d", &sr);

    printf("To: ");
    scanf("%d", &r);

    printf("\nPrime numbers from %d to %d:\n", sr,r);
    for(sr;sr<=r;sr++)
    {
        count=0;
        for(f=1;f<=sr;f++)
        {
            if(sr%f==0)
            {
                count++;
            }
            if(count>2)
            {
                break;
            }
        }

        if(count==2)
        {
            printf("%d\n", sr);
        }
    }

    return 0;
}