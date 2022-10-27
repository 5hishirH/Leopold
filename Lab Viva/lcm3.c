// LCM of three numbers

#include<stdio.h>

int main()
{
    int p,q,r,max,m,lcm=0;

    printf("Enter three numbers: ");
    scanf("%d%d%d", &p, &q, &r);
    max = p*q*r;
    for(m=1;m<=max;m++)
    {
        if(m%p && m%q && m%r)
        {
            lcm = m;
            break;
        }
    }
    printf("LCM of %d, %d and %d = %d", p,q,r,lcm);
    return 0;
}