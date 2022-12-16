// Write a c program to search for a character in a string. It will print the index of the 
// element, if it is found. Otherwise, it will print “Not found.”

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100], ch2;
    int i, n, index, flag = 0;

    printf("Enter a string : ");
    gets(ch);

    printf("Enter a character to search in the string : ");
    ch2 = getchar();

    n = strlen(ch);
    for ( i = 0; i < n; i++)
    {
        if ( ch2 == ch[i] )
        {
            index = i;
            flag = 1;
            break;
        }
    }

    if ( flag )
    {
        printf("Index = %d\n", index);
    }
    else
    {
        printf("Not found\n");
    }

    return 0;
}