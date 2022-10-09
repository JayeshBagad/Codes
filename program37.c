
#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
 {
     int iCnt=0;
     int iSum=0;
     if(iNo < 0)
     {
         iNo= -iNo;
     }   

     for(iCnt=iNo/2; ((iCnt >= 1) && (iSum <= iNo)); iCnt--) // loop will go reverse
     {
         if((iNo % iCnt)==0)
         {
             iSum = iSum + iCnt;
         }
     }
     
     if(iSum==iNo)
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