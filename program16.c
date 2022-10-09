//Accept no. from user, display that no. of hello on screen.

#include<stdio.h>

//Demonstration of ITERATION

void Display(int iNo)  //defination
{
    int iCnt = 0;
    if (iNo < 0)  // filter
    {
        printf("Please enter only positive number");
        return;
    }
    
    //      1       2       3
    for (iCnt = 0; iCnt<iNo; iCnt++) 
    {
        printf("Hello\n");// 4
    }
        
}
int main()
{
    int iValue=0;
    printf("Enter the number: \n");
    scanf("%d",&iValue);
    Display(iValue); // function call

    return 0;
}