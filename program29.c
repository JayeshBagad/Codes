// factor program with updator
//time complexity N only (Time complexity in for loop always)
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;

    if(iNo<0)
        {
            iNo= -iNo;  // updater
        }
    for(iCnt=1; iCnt < (iNo/2); iCnt++)
    {
       
        if((iNo % iCnt)==0)
        {
            printf("%d",iCnt);
        }
    }
}

int main ()
{
    int iValue=0;

    printf("Enter the Number: \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}

//Time Complexity : O(N)