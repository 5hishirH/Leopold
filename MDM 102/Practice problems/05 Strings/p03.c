// A c program to count the number of capital letters and small letters in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int i, n, scount = 0, ccount = 0;
    printf("Enter a string :\n");
    gets(ch);

    n = strlen(ch);
    for( i = 0; i < n; i++)
    {
        if ( ch[i] >= 'a' && ch[i] <= 'z')
            scount ++;
        else if ( ch[i] >= 'A' && ch[i] <= 'Z')
            ccount ++;
    }

    printf("Capital letter = %d, small letter = %d\n", ccount, scount);

    return 0;
}