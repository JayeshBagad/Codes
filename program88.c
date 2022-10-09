// Input : 5
//Output : 1 * 3 * 5 *

// OP = 1 * 3 * 5
// IP =  6 

// 1 2 3 4 5 6 
// 1 * 3 

//1 2 3 4 5 6 Counter 
//1 * 3 * 5 *  output use logic odd even.
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            printf("*\t");
        }
        else
        {
            printf("%d\t",iCnt);
        }
    }
    
}

int main()
{
    int iValue = 0;

    printf("Please Enter the value: \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}