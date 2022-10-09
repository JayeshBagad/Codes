
#include<stdio.h>
  
void Display(int Arr[]) // Array is ptr[]
{
    int iCnt = 0;
    printf("Elements of Array: \n");
    //     1        2       3
    for(iCnt =0; iCnt < 5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]); // 4
    }
}

int main()
{
    auto int Brr[5];         // 1D Array static memory allocation
    register int iCnt= 0;

    printf("Enter elements: \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d", &Brr[iCnt]);
    }
    Display(Brr);  // Display 100
    return 0;

}