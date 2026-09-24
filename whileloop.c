#include <stdio.h>
    int main() {
        int i=0;
        printf("Enter any number = ");
        scanf("%d",&i);
        
        while(i>=1)
        {
            printf("%d\n",i);
            i--;
        }
        return 0;
    }