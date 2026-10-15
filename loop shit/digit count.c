#include <stdio.h>
int main() {
    long long n;
    int count = 0;
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    if (n==0) {
        count = 1;
    } else {
        while (n > 0) {
            count++;
            n = n / 10;
        }
    printf("The number of digits is: %d\n", count);
        return 0;

}