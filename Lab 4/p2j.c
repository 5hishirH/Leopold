#include<stdio.h>

int main()
{
    int n,i,sum,t;
    sum = 0;
    t = 60;
    printf("Enter term no.: ");
    scanf("%d", &n);
    if (n<20){
         for(i=1;i<=n;i++) {
            sum = sum + t;
            t = t - 3;
        }
        printf("Sum = %d", sum);
    }
    else {
        printf("Invalid Input.");
    }

    return 0;
}
