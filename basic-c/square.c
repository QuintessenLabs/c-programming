// to calculate the area and perimeter of a square

#include <stdio.h>

int main() {
    float side, area, perimeter;
    printf("enter side of square: ");
    scanf("%f", &side);
    area = side * side;
    perimeter = 4 * side;
    printf("area of square: %.2f\n", area);
    printf("perimeter of square: %.2f\n", perimeter);
    return 0;
}