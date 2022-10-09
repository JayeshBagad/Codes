// **Problems on Digit**
#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0) 
    {
        iDigit= iNo % 10;
        printf("%d\n",iDigit);
        //main Logic 
        iNo= iNo /10;
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;
}