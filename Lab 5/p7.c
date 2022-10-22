// A c program to print a prime number within a range.

#include<stdio.h>

int main()
{
    int sr,r,num,f,count;

    printf("[Enter the range]\nFrom: ");
    scanf("%d", &sr);
    printf("To: ");
    scanf("%d", &r);
    printf("\nPrime numbers from %d to %d:\n", sr,r);
    for(num=sr;num<=r;num++)
    {
        count=0;
        for(f=1;f<=num;f++)
        {
            if(num%f==0)
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
            printf("%d\n", num);
        }
    }

    return 0;
}