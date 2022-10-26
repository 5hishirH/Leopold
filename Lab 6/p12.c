// A c program to print the palindrome numbers within a range.

#include<stdio.h>

int main()
{
    int num,sr,er,r,i;

    printf("[Enter range]\nFrom: ");
    scanf("%d", &sr);
    printf("To: ");
    scanf("%d", &er);

    printf("\n[Palindrome numbers from %d to %d]\n", sr,er);
    for(sr;sr<=er;sr++)
    {
        num = sr;
        r = 0;

        for(i=1;num!=0;i++)
        {
            r = r*10 + (num%10);
            num = num/10;
        }

        if(sr == r)
        {
            printf("%d\n", sr);
        }
    }

    return 0;
}