// factor program with updator
// time complexity N/2
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt=0;

    if(iNo<0)
        {
            iNo= -iNo;  // updater
        }
    for(iCnt=1; iCnt <= (iNo/2); iCnt++)
    {
       
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
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

//Time Complexity : O(N/2)----- O for Order/ N for Natural no.