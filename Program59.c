#include"Header59.h"

int main()
{
    auto int iValue1 = 0 , iValue2 = 0; // Stroage class in c read Ajay Mittal books
    auto ULONG lRet =0;

    printf("Enter 1st number:");
    scanf("%d",&iValue1);

    printf("Enter 2nd number:");
    scanf("%d",&iValue2);

    lRet= Power(iValue1, iValue2);

    printf("Result is : %d\n", lRet);

    return 0;
}