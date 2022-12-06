// A c function that takes mark of a subject as parameter and
// returns obtained grade using the given table
#include<stdio.h>

float grade(float marks)
{
    if ( marks < 50 )
        return 0;
    else if ( marks < 60 )
        return 2;
    else if ( marks < 70 )
        return 2.5;
    else if( marks < 80 )
        return 3;
    else if ( marks < 90 )
        return 3.5;
    else if ( marks < 100 )
        return 4;
    else
        return 5;   //flag
}

int main()
{
    float mark, g;
    printf("Enter marks : ");
    scanf("%f", &mark);
    g = grade(mark);
    if ( g < 5)
        printf("Grade = %.1f\n", g);
    else
        printf("Invalid input\n");
    return 0;
}