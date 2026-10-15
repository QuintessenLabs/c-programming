#include <stdio.h>
#include <math.h> 
int main() {
    int a,b,c,perimeter,area,s;
    printf("enter side a=");
    scanf("%d",&a);
    printf("enter side b=");
    scanf("%d",&b);
    printf("enter side b=");
    scanf("%d",&c);
     s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area is %d",area);

}


