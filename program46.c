// **Problems on Digit**
//Assignment 1
//Input : 1234
/*Output :
    4
    3
    2
    1
*/

#include<stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit=0;

    while (iNo != 0) // joparayant(while) zero ni hot toparyant
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