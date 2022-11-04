// 1+4+10+19+.....+N

#include<stdio.h>

int main()
{
    int term, difference, sum, number_of_terms, count;
    printf("Enter term no: ");
    scanf("%d", &number_of_terms);

    term = 1;
    difference = 0;
    count = 1;
    sum = 0;

    while(count <= number_of_terms)
    {
        sum = sum + term;
        difference = difference + 3;
        term = term + difference;
        count = count + 1;
    }

    printf("The sum is %d\n", sum);

    return 0;
}