// A c program to add three strings.

#include <stdio.h>
#include <string.h>
int main() {
    char str1[100] , str2[100], str3[100], str4[400];

    printf("Enter a string : ");
    gets(str1);
    printf("Enter another string : ");
    gets(str2);
    printf("Enter another string : ");
    gets(str3);
    
    strcat(str4, str1);
    strcat(str4, str2);
    strcat(str4, str3);

    puts(str4);

    return 0;
}