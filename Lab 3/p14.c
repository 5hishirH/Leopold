/* A c program to implement a calculator (+, -, *, /, %) using switch. */

#include<stdio.h>

int main()
{
    float p,q,r;
    char op;
    scanf("%f%c%f", &p,&op,&q);
    switch(op)
    {
        case '+':
            r = p+q;
            printf("Result = %f", r);
            break;

        case '-':
            r = p-q;
            printf("Result = %f", r);
            break;

        case '*':
            r = p*q;
            printf("Result = %f", r);
            break;

        case '/':
            if(q != 0)
            {
                r = p/q;
                printf("Result = %f", r);
            }
            else
            {
                printf("Undefined");
            }
            break;

        case '%':
            int r = (int)p%(int)q;
            printf("Result = %d", r);
            break;

        default:
            printf("Invalid input.");
            break;
    }
    return 0;
}
