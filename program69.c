// Program for Dynamic memory Allocation
#include<stdio.h>
#include<stdlib.h> // used for malloc and free memory allocation 

void Display(int Arr[], int iLength) 
{
    int iCnt = 0;
    printf("Elements of Array: \n");
    //     1        2       3
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        printf("%d\n", Arr[iCnt]); // 4
    }
}

int main()
{
    // auto int Brr[5];         // static memory allocation
    int *ptr = NULL;            // pointer ptr (8 byte for pointer)
    register int iCnt= 0;
    int iSize = 0;  // to get no of elements size

    printf("Enter Number of Elements:\n");
    scanf("%d",&iSize);

    ptr=(int *)malloc(iSize * sizeof(int)); //(int *) is typecast
    
    printf("Enter elements: \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
                          //    Arr[]       iLength
    Display(ptr, iSize);  // Display(100, iSize(4))
    free(ptr);

    return 0;
}