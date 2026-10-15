#include <stdio.h>
int main()
{
    int i,m=5;
    int marks[m],max;
    printf("input marks\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&marks[i]);
    }
printf("marks are\n");
max=marks[0];
for(i=0;i<m;i++)
    {
        if (marks[i]>max)
        {
            max=marks[i];
        }
       
    }
     printf("max marks are %d",max);
    return 0;

}