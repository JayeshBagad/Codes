//Accept N number and perform Summation of that N numbers
#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[], int iLength)
{
    int iSum= 0, iCnt = 0;

    for(iCnt= 1; iCnt< iLength; iCnt++)

}

int main()
{
    int iSize = 0, iCnt = 0, iRet=0;
    int *ptr= NULL;

    printf("Enter Number of Elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the Values:\n");
    for(iCnt =0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = SummationNumber(ptr, iSize);

    printf("Summation is: %d\n",iRet);
    free(ptr);

    return 0;
}