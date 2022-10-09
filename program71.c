// Acccept N number from user and count the even no. from N numbers
#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEvenCnt = 0;
    

    for(iCnt=0; iCnt< iLength; iCnt++)
    {   
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }   
    }
    return iEvenCnt;
}

int main()
{
    int iSize = 0, iCnt = 0, iRet=0;
    int *ptr= NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Values of Array:\n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr, iSize);
    printf("Number of even numbers are: %d\n",iRet);
    free(ptr);

    return 0;
}