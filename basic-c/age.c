// to calculate your age in days
#include <stdio.h>
int main() {
    int ageinyears, ageindays;
    printf("enter your age in years: ");
    scanf("%d", &ageinyears);
    ageindays = ageinyears * 365;
    printf("your age in days is: %d\n", ageindays);
    return 0;
}