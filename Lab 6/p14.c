#include<stdio.h>

int main()
{
    int lr,ur,a,temp,p;
    printf("[Enter range]\nFrom: ");
    scanf("%d", &lr);
    printf("To: ");
    scanf("%d", &ur);
    printf("\nArmstrong numbers from %d to %d\n", lr, ur);
    for(lr;lr<=ur;lr++)
    {
        temp = lr;
        a = 0;
        while(temp!=0)
        {
            p = temp%10;
            a = a + (p*p*p);
            temp = temp/10;
        }

        if(lr == a)
        {
            printf("%d\n", lr);
        }
    }

    return 0;

}
