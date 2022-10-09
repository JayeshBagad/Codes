#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Power(int iNo1, int iNo2)
{   
    ULONG lMult= 1; //
    register int iCnt= 0; //storage class concept

    for(iCnt=1; iCnt<=iNo2; iCnt++)
    {
        lMult= lMult * iNo1;
    }
    return lMult;
}

int main()
{
    auto int iValue1, iValue2 = 0; // Stroage class in c read Ajay Mittal books
    auto ULONG lRet =0;

    printf("Enter 1st number:");
    scanf("%d",&iValue1);

    printf("Enter 2nd number:");
    scanf("%d",&iValue2);

    lRet= Power(iValue1, iValue2);

    printf("Result is : %d\n", lRet);

    return 0;
}