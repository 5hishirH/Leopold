// A c function to check whether a string is a palindrome or not. 
// It returns 1 if given string is a palindrome, otherwise, it returns 0. 
// A string is called palindrome if the reverse of the string is the same as the original string, 
// i.e., madam. You can use library functions. 

#include<stdio.h>
#include<string.h>

int palindrome( char str[], int n)
{
    char temp[n];
    strcpy ( temp, str );
    strrev ( temp );
    return strcmp(str, temp) == 0;
}

int main()
{
    char ch[100];
    printf("Enter a string : ");
    gets(ch);
    if( palindrome( ch, strlen(ch)) )
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}