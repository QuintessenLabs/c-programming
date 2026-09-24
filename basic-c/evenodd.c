#include <stdio.h>
    int main() {
        int input, remainder2, remainder3;
        printf("Enter any number= ");
        scanf("%d", &input);
        remainder2 = input % 2;
        remainder3 = input % 5;
        if (remainder2==0 && remainder3==0) 
            printf("The number is special\n");
        else if (remainder2 == 0)
            printf("The number is even\n");
        else if (remainder3 == 0) 
            printf("The number is divisible by 5\n");
        else
            printf("The number is odd\n");


    }