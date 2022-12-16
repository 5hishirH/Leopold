// LCM of three numbers

#include<stdio.h>

int main()
{
    int p,q,r,max,m,lcm=0;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &p, &q, &r);
    max = p*q*r;
    for(m=1;lcm==0;m++)
    {
        if(m%p == 0 && m%q == 0 && m%r == 0)
        {
            lcm = m;
        }
    }
    printf("LCM of %d, %d and %d = %d\n", p,q,r,lcm);
    return 0;
}