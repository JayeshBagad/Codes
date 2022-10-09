//Accept N number also get one number and count frequency of that number in that particular N numbers
#include<stdlib.h>
#include<stdio.h>
int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency=0;

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iFrequency++;
        }
    }
   return iFrequency; 
}

int main()
{
    int iSize = 0, iCnt = 0, iRet=0;
    int *ptr= NULL;
    int iValue = 0; 

    printf("Enter Number of Elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Values:\n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the Number for Calculate the frequency:\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr, iSize, iValue);
    printf("Frequency is %d\n", iRet);

    free(ptr); // memory deallocation.

    return 0;
}