//Accept 2 no. a n b from user and returns the value as a^b 
//IP= 2 and 3
//OP= 2^3= 2*2*2= 8
#include<stdio.h>

unsigned long int Power(int iNo1, int iNo2)
{   
    unsigned long int lMult= 1; //unsigned gaves only +Ve ans output
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
    auto unsigned long int lRet =0;

    printf("Enter 1st number:");
    scanf("%d",&iValue1);

    printf("Enter 2nd number:");
    scanf("%d",&iValue2);

    lRet= Power(iValue1, iValue2);

    printf("Result is : %d\n", lRet);

    return 0;
}