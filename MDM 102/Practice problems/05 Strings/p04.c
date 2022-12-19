// A c program to count the number of 
// vowels, consonants, digits, white-spaces, and special characters.

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int i, n, vcount = 0, ccount = 0, dcount = 0, wcount = 0, scount = 0, flag;

    printf("Enter a string : ");
    gets(ch);

    n = strlen(ch);
    for ( i = 0; i < n; i++)
    {
        flag = 0;
        // vowel and consonant
        if (ch[i] >= 'A' && ch[i] <= 'z' )
        {
            flag = 1;
            switch( ch[i] )
            {
                case 'a' :
                case 'e' :
                case 'i' :
                case 'o' :
                case 'u' :
                case 'A' :
                case 'E' :
                case 'I' :
                case 'O' :
                case 'U' :
                    vcount++;
                    break;
                default :
                    ccount++;
            }
        }

        // digit
        if ( ch[i] >= '0' && ch[i] <= '9')
        {
            dcount++;
            flag = 1;
        }

        // white spaces
        if ( ch[i] == ' ' || ch [i] == '\t' || ch[i] == '\n' || ch[i] == '\r' || ch[i] == '\v' || ch[i] == '\f' )
        {
            wcount++;
            flag = 1;
        }

        // special character
        if ( flag == 0 )
            scount++;
    }

    printf("Vowel = %d, constants = %d,  digit = %d, white-space = %d, special character = %d\n", vcount, ccount, dcount, wcount, scount);
    return 0;
}