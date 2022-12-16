/* A c program to check whether a character is a vowel or consonant using switch. */

#include<stdio.h>

int main()
{
    char ch,op;
    printf("Enter the character: ");
    scanf("%c",&ch);
    op = ( ch >= 'A' && ch <='z' ) ? ch:'0';
    switch (op)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;
    case 'A':
        printf("Vowel");
        break;
    case 'E':
        printf("Vowel");
        break;
    case 'I':
        printf("Vowel");
        break;
    case 'O':
        printf("Vowel");
        break;
    case 'U':
        printf("Vowel");
        break;
    case '0':
        printf("%c is not an alphabet.", ch);
        break;

    default:
        printf("Consonant");
    }
    return 0;
}
