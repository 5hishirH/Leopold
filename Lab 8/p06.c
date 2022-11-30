// A c program to calculate the length of a string.

#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int i;

    printf("Enter a string :\n");
    gets(ch);

    for ( i = 0; ch[i] != '\0'; i++);

    printf("Length of the string is %d\n", i);
    return 0;
}