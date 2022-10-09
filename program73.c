// Accept N number from users and return Largest number from that N numbers.
#include<stdio.h>
#include<stdlib.h>
// only for Positive numbers
int Maximum(int Arr[], int iLength)
{
    int iMax=0;
    int iCnt =0;

    for(iCnt=0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        } 
    }
    return iMax;
}

int main()
{
    auto int iSize = 0, iCnt = 0, iRet=0;
    auto int *ptr= NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Values:\n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Maximum(ptr, iSize);

    printf("Maximum Number is: %d\n",iRet);

    free(ptr); // memory deallocation.

    return 0;
}