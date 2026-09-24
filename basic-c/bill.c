// to calculate the total cost of items in a bill

#include <stdio.h>

int main() {
    int numberofitems;
    int item1 = 0, item2 = 0, item3 = 0, item4 = 0, item5 = 0;
    int item6 = 0, item7 = 0, item8 = 0, item9 = 0, item10 = 0;
    float totalmarks;

    printf("How many items do you have (1-10): ");
    scanf("%d", &numberofitems);

    if (numberofitems >= 1) {
        printf("Enter cost for item 1: ");
        scanf("%d", &item1);
    }
    if (numberofitems >= 2) {
        printf("Enter cost for item 2: ");
        scanf("%d", &item2);
    }
    if (numberofitems >= 3) {
        printf("Enter cost for item 3: ");
        scanf("%d", &item3);
    }
    if (numberofitems >= 4) {
        printf("Enter cost for item 4: ");
        scanf("%d", &item4);
    }
    if (numberofitems >= 5) {
        printf("Enter cost for item 5: ");
        scanf("%d", &item5);
    }
    if (numberofitems >= 6) {
        printf("Enter cost for item 6: ");
        scanf("%d", &item6);
    }
    if (numberofitems >= 7) {
        printf("Enter cost for item 7: ");
        scanf("%d", &item7);
    }
    if (numberofitems >= 8) {
        printf("Enter cost for item 8: ");
        scanf("%d", &item8);
    }
    if (numberofitems >= 9) {
        printf("Enter cost for item 9: ");
        scanf("%d", &item9);
    }
    if (numberofitems >= 10) {
        printf("Enter cost for item 10: ");
        scanf("%d", &item10);
    }

    totalmarks = item1 + item2 + item3 + item4 + item5 + item6 + item7 + item8 + item9 + item10;

    printf("\nYour total cost is: %.2f\n", totalmarks);

    return 0;
}