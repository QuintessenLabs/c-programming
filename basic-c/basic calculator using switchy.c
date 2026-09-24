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
    switch(operation) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                printf("cannot divide by 0\n");
                break;
            }
            result = a / b;
            break;
            
        default:
            printf("Invalid operation\n");
            break;
    }

    printf("Result: %.2f\n", result);
    scanf("%f", &b);

    
}
