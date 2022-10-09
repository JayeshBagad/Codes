#include"Header8.h"

//////////////////////////////////////////////////////////
//Write a program to perform addition of 2 numbers.
/////////////////////////////////////////////////////////

int main()
{
    //naming conventions
    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter 1st number:\n");
    scanf("%d",&iNo1);

    printf("Enter 2nd number:\n");
    scanf("%d",&iNo2);

    iNo3=Addition(iNo1,iNo2);
    printf("Addition is: %d\n",iNo3);
    
    return 0;
}

/////////////////////////////////////////////////////////
//
// Input:       11  10
// Output:      21
//
/////////////////////////////////////////////////////////

// gcc program6.c Library6.c -o Myexe
// ./Myexe