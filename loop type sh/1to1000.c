#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (n%2==0) {
        printf("the number of evens are: %d\n", n/2);
    } else {
        printf("the number of evens are: %d\n", (n-1)/2);
    } 

        


        return 0;

}