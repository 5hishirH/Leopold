// A c function that takes a year as a parameter and returns 1 if it is a leap year, 
// otherwise, it returns 0. It will return 1 for 2000 and 0 for 2100.
#include<stdio.h>

int leapyear(int year)
{
    return year%400 == 0 || year%4 == 0 && year%100 != 0;
}

int main()
{
    int y;
    printf("Enter year : ");
    scanf("%d", &y);
    if( leapyear(y) )
    {
        printf("Leap year\n");
    }
    else
    {
        printf("Not a leap year\n");
    }

    return 0;
}