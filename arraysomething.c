#include <stdio.h>

int main() {
    int marks[100], i,n;

    for (i = 0; i <= 4; i++)
    {
        printf("input marks of %d subjects= ",i);
        scanf("%d", &marks[i]);
    }

    printf("marks entered by user\n= ");
    for (i = 0; i<n; i++)
    {
        printf("%d\t", marks[i]);
    }

    return 0;
}