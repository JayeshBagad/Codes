
#include<stdio.h>
 
void main()
{
    int i,j,n;
 
    printf("Enter the no of lines\n");
    scanf("%d",&n);5
 
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", i);
        }
 
        printf("\n");
    }
}