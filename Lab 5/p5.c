// c program to calculate the GCD and LCM of two numbers

#include<stdio.h>

int main()
{
    int p,q,i=1,gcd,n,lcm=0;
    printf("Enter two number: ");
    scanf("%d%d", &p, &q);
    while(i < p && i < q) 
    {
        if(p%i==0 && q%i==0) {
            gcd = i;
        }
        i++;
    }
    for(n=1;lcm==0;n++)
    {
        if(n%p==0 && n%q==0)
        {
            lcm = n;
        }
    }
    printf("GCD of %d and %d = %d\n", p,q,gcd);
    printf("LCM of %d and %d = %d\n", p,q,lcm);
    return 0;
}