#include<stdio.h>
int main()
{ int i;
    char j='A';
    for(i=1;i<=5;i++)
    {
        for(j='A';j<'A'+ i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}