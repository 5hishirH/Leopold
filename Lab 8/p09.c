// A c program to reverse a string

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp;
    int i, n;
    printf("Enter a string : ");
    gets(str);

    n = strlen(str);
    for( i = 0; i < n/2; i++ )
    {
        temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    puts(str);
    return 0;
}