#include<stdio.h>
int main()
{
    //naming conventions
    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter 1st number:\n");
    scanf("%d",&iNo1);

    printf("Enter 2nd number:\n");
    scanf("%d",&iNo2);

    iNo3=iNo1+iNo2;
    
    printf("Addition is: %d\n",iNo3);
    return 0;
}