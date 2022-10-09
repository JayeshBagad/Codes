// No Linear Patterns Program
// IP= row=4 colmn=4
/*
OP=
        * * * *
        * * * *
        * * * *
        * * * *
*/

#include<stdio.h>

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++) // outer loop
    {
        for(j = 1; j <= iCol; j++) // inner loop
        {
            printf("*\t");
        }
        
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Please Enter Number of Rows: \n");
    scanf("%d",&iValue1);

    printf("Please Enter Number of Rows: \n");
    scanf("%d",&iValue2);



    Display(iValue1, iValue2);

    return 0;
}