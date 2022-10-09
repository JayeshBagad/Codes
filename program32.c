//Accept no. from user and written addition of its factors

#include<stdio.h>


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
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = DisplayFactorAddition(iValue);
    printf("Sum of Factors is: %d\n",iRet);

    return 0;
}