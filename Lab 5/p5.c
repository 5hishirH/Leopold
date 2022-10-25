// A c program to calculate the GCD and LCM of two numbers.

#include<stdio.h>

int main()
{
    int p,q,i=1,gcd,lcm=0;
    printf("Enter two number: ");
    scanf("%d%d", &p, &q);

    // GCD
    while(i < p && i < q) 
    {
        if(p%i==0 && q%i==0) {
            gcd = i;
        }
        i++;
    }

    // LCM
    for(i=1;lcm==0;i++)
    {
        if(i%p==0 && i%q==0)
        {
            lcm = i;
        }
    }
    printf("GCD of %d and %d = %d\n", p,q,gcd);
    printf("LCM of %d and %d = %d\n", p,q,lcm);
    
    return 0;
}