// Accept N number from users and return Largest number from that N numbers.
#include<stdio.h>
#include<stdlib.h>
// only Positive numbers and negative numbers
int Minimum(int Arr[], int iLength)
{
    int iMin=Arr[0];
    int iCnt =0;

    for(iCnt=0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        } 
    }
    return iMin;
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

    iRet = Minimum(ptr, iSize);

    printf("Minimum Number is: %d\n",iRet);

    free(ptr); // memory deallocation.

    return 0;
}