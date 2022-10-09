// IP= row=4 colmn=4
/*
OP=
        $ 2 3 4
        1 $ 3 4
        1 2 $ 4
        1 2 3 $
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Inputs.\n"); // filter for only diagonal
        return;
    }
    
    for(i = 1; i <= iRow; i++)
    {
        for(j =1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t", j);
            }
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