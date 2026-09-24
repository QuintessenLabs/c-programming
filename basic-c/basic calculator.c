// to create a basic calculator

#include <stdio.h>
#include <stdlib.h>
int main() {
    char operation;
    float a, b, result;

    printf("Enter first integer: ");
    scanf("%f", &a);

    printf("Enter operation: (+, -, *, /)"); 
    scanf("%s", &operation);
    
    printf("Enter second integer: ");
    scanf("%f", &b);

    
    if (operation == '+')
        result = a + b;
    else if (operation == '-')
        result = a - b;
    else if (operation == '*')
        result = a * b;
    else if (operation == '/')
        result = a / b;
    else
        printf("Invalid operation\n");

    printf("Result: %.2f\n", result);
    scanf("%f", &b);

    
}
