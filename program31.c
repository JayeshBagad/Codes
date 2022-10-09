// factor program with updator
// time complexity N/2
#include<stdio.h>

void DisplayNonFactor(int iNo)
{
    int iCnt=0;
    if(iNo<0)
        {
            iNo= -iNo;  // updater
        }

    for(iCnt=1; iCnt < iNo; iCnt++)
    {
       
        if((iNo % iCnt)!=0)
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

    DisplayNonFactor(iValue);

    return 0;
}

//Time Complexity : O(N)----- O for Order/ N for Natural no.