#include <stdio.h>

void traverse(int m[], int x)
{
    int i;
    printf("marks are \n");
    for (i = 0; i < x; i++)
    {
        printf("%d\t", m[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, marks[100];

    printf("input nth value= ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("input marks of %d subject= ", i + 1);
        scanf("%d", &marks[i]);        
    }

    traverse(marks, n);

    return 0;
}