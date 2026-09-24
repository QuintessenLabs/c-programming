#include <stdio.h>
    int main() {
        int a, b, c;
        printf("enter angle 1= ");
        scanf("%d", &a);
        printf("enter angle 2= ");
        scanf("%d", &b);
        printf("enter angle 3= ");
        scanf("%d", &c);
    
    if (a+b+c==180 && (a==90 || b==90 || c==90))
        printf("its a right-angled triangle");
    else if (a+b+c==180)
        printf("its a triangle");
    else
        printf("not a triangle");  

    }