// A c program to count alphanumeric characters in a string.
// Note that alphanumeric characters are a combination of alphabetic and numeric characters. 
// Your program will print 8 for this string "<html></html>".

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int n, i, count = 0;

    printf("Enter a string :\n");
    gets(ch);

    n = strlen(ch);
    for ( i = 0; i < n; i++ )
    {
        if( ch[i] >= 'A' && ch[i] <= 'z' || ch[i] >= '0' && ch[i] <= '9' )
        {
            count++;
        }
    }
    
    printf("alphanumeric character = %d\n", count);

    return 0;
}
