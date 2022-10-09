//Accept number from user and check whether its Armstrong number or not (used boolean id check whether)

#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
    int iMult =1;
    register int iCnt =0;

    for(iCnt=1; iCnt<=iNo2; iCnt++)
    {
        iMult= iMult * iNo1;
    }
    return iMult;
}

bool CheckArmStrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0, iDigit = 0, iSum =0; 

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iTemp = iNo;        //copy number in iTemp temporary variable

    // Calculate numbers of digits  of given numbers
    while (iNo != 0)
    {
        // here it will gave number digit in given number by user
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;

    while (iNo != 0)
    {
        iDigit = iNo %  10;
        iSum = iSum + Power(iDigit, iDigCnt);
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
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
    int iValue =0;
    bool bRet;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = CheckArmStrong(iValue);
    if (bRet == true)
    {
        printf("%d is ArmStrong Number...",iValue);
    }
    else
    {
        printf("%d is not ArmStrong Number...",iValue);
    }

    return 0;
}