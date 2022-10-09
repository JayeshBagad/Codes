//// **Problems on Digit** Accept no. show its even digits summation
#include<stdio.h>

int DisplayEven(int iNo)
{
    int iDigit=0;
   // int iSum =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0) 
    {
        iDigit= (iNo/2) % 10;

        if ((iDigit %2) == 0)
        {
            printf("%d\n",iDigit);
        }    
        
        iNo= (iNo/2) /10;
    }
}

int main()
{
    int iValue=0;
    int iRet= 0;
    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = DisplayEven(iValue);
    printf("Even is %d",iRet);
    return 0;
}