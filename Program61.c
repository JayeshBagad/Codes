//Accept number from user and check whether its Armstrong number or not (used boolean id check whether)

#include<stdio.h>
#include<stdbool.h>


bool CheckArmStrong(int iNo)
{
    int iTemp = 0, iCnt=0, iMult =1;
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

    while (iNo != 0)  //main logic
    {
        iMult = 1;
        iDigit = iNo %  10;

        for(iCnt=1; iCnt <= iDigCnt; iCnt++)
        {
            iMult= iMult * iDigit;  
        }

        iSum = iSum + iMult;
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