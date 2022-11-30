// A c program to copy a string to another string.

#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100];
    int i, n;
    printf("Enter a string :\n");
    gets(str1);

    n = strlen(str1);
    for( i = 0; i < n; i++)
    {
        str2[i] = str1[i];
    }

    puts(str2);

    return 0;
}