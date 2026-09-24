#include <stdio.h>
int main() {
    char ch;
    printf("Enter any character= ");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("The character is small");
    else if (ch>='A' && ch<='Z')
        printf("The character is capital");
    else
        printf("It may be any number or special character");
    }
