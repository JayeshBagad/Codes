//Accept number from user check whether no. is perfect or not.
// when the check whether asel teva write boolean for function as well <stdiobool.h>
// Perfect No. - 6, 28 (the perfect no. is addition of factors of that no. is equal to that given no. )  

//Accept no. from user and written addition of its factors

#include<stdio.h>
#include<stdbool.h>
 int DisplayFactorAddition(int iNo)
 {
     int iCnt=0;
     int iSum=0;
     if(iNo < 0)
     {
         iNo= -iNo;
     }   

     for(iCnt=1; iCnt <= (iNo/2); iCnt++)
     {
         if((iNo % iCnt)==0)
         {
             iSum = iSum + iCnt;
         }
     }
     return iSum;
 }
 bool CheckPerfect(int iNO)
 {
     int iAns=0;
     iAns= DisplayFactorAddition(iNO);
     if(iAns == iNo)
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
    bool bRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet== true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is a perfect not number.\n",iValue);
    }
    return 0;
}