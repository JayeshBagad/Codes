// return 1st occurence of that number with his array index number. 
#include<stdio.h>
#include<stdlib.h>
int SearchFirstOccurence(int Arr[], int iNo, int iLength)
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
        return -1;
    }
    else
    {
        return iCnt;
    } 
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    int iRet=0;
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

    iRet = SearchFirstOccurence(ptr, iSize, iValue);
    if (iRet == -1)
    {
        printf("No Such element in array.\n");
    }
    else
    {
        printf("Element is first occured at : %d\n",iRet); 
    }

    free(ptr); // memory deallocation.

    return 0;
}