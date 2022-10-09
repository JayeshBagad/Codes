// return the no. of the digits from that no. 
#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt=0;
   // int iDigit=0;
    
    while(iNo > 0)
    {
       // iDigit= iNo % 10;

        iCnt++;
       
        iNo= iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number: \n");
    scanf("%d",iValue);

    iRet = CountDigit(iValue);
    printf("Number of Digits are: %d\n",iRet);

    return 0;
}