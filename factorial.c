#include <stdio.h>
int main() {
    int i,n,output;
    printf("input any number = ");
    scanf("%d",&n);

    for(i=n; i<=1; i--);
    {
        output=output*i;
    }
        printf("%d", output);

        return 0;

}