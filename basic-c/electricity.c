#include <stdio.h>
    int main() {
        int unit, price, rate;
        printf(" Enter amount of units= ");
        scanf("%d", &unit);
        if (unit>=0 && unit<=100)
            rate = 2;
        else if (unit>=101 && unit<=200)
            rate = 3;
        else if (unit>=201)
            rate = 5;
        
        price = unit*rate;
        printf("The total bill = %d", price);        
        
    }