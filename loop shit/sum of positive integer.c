#include <stdio.h>
    int main() {
        int i = 1;
        long long n = 0;
        long long sum = 0;
        printf("Enter a positive integer: ");
        scanf("%lld", &n);

        while (i<=n) {
            sum += (i*i);
            i++;
        }
        
        printf("The sum is: %d\n", sum);

        return 0;

    }