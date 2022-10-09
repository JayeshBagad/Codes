#include<stdlib.h>
#include<stdbool.h>
#include<stdio.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    bool bRet=0;
    int *ptr= NULL; 

    printf("Enter Number of Elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Values:\n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to serach:\n");
    scanf("%d",&iValue);

    bRet = Search(ptr, iSize, iValue);
    if (bRet == true)
    {
        printf("Element is there in array.\n");
    }
    else
    {
        printf("Element is not there in array.\n"); 
    }

    free(ptr); // memory deallocation.

    return 0;
}