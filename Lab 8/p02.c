// A c program to count the frequency of a character in a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100], ch2;
    int i, n, frequency = 0;

    printf("Enter a string : ");
    gets(ch);

    printf("Enter a character to find its frequency in the string : ");
    ch2 = getchar();

    n = strlen(ch);
    for ( i = 0; i< n; i++ )
        if (ch2 == ch[i])
            frequency++;

    if( frequency )
        printf("Frequency = %d\n", frequency);
    else
        printf("Not found\n");

    return 0;
}