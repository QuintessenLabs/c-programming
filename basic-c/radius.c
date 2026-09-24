// to calculate the circumference and area of a circle

#include <stdio.h>
int main() {
    float a, b, c;
    printf("Enter radius of circle: ");
    scanf("%f", &a);
    b = 2*3.14*a;
    c = 3.14*a*a;
    printf("The circumference: %.2f\n", b);
    printf("The area: %.2f\n", c);
    return 0;
}