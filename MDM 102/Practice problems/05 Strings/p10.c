// A c program to check whether a string is a palindrome or not

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp[100];
    int i, n;
    printf("Enter a string : ");
    gets(str);
    strcpy(temp, str);
    strrev(temp);

    if( !strcmp(str, temp) )
    {
        printf("String is palindrome\n");
    }
    else
    {
        printf("String is not palindrome\n");
    }

    return 0;
}