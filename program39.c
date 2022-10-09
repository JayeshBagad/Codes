//check whether its Prime number or not
#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;

    if(iNo<0)
        {
            iNo= -iNo;  // updater
        }

    for(iCnt=2; iCnt <= iNo/2; iCnt++)
    {
       
        if((iNo % iCnt)==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}

bool CheckPrime(int iNo)
{
    int iRet=0;
    iRet= CountFactor(iNo);
    if(iRet==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a Prime number\n",iValue);
    }
    else
    {
        printf("%d is a Prime not number.\n",iValue);
    }
    return 0;

}