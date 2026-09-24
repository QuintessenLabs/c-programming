#include <stdio.h>
    int main() {
        int marks, attend;
        printf("Enter marks 0-100 = ");
            scanf("%d", &marks);
        printf("Enter attendance 0-100 = ");
            scanf("%d", &attend);
        if (marks>=90 && attend>=75)
            printf(" You are eligible for special scholarship");
        else if (marks>=75 && attend>=75)
            printf("You are eligible for scholarship");
        else if (marks>=100)
            printf("please enter a number from 0-100");
        else if (attend>=100)
            printf("please enter attendance from 0-100");
        else if (attend>=100 && marks>=75)
            printf("Please enter both values ranging from 0 - 100");
        else 
            printf("you aint getting a scholarship");
        
        
    }