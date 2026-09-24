// to reverse a three-digit number

#include <stdio.h>
int main() {
    int number,result;
    printf("Enter a number: ");
    scanf("%d", &number);
    int a = number/100;
    int b = (number - a*100)/10;
    int c = number%10;
    result = c*100 + b*10 + a;
    printf("Reversed number is: %d\n", result);
    return 0;
}