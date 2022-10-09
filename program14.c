#include<stdio.h>

//Demonstration of ITERATION

void Display()  // why use void? when the function not written anything
                // service provider function
{
    int iCnt = 0;
    //1 Intialization
    //2 Condition
    //3 Displacement
    //4 Loop body
    


    //      1       2       3
    for (iCnt = 0; iCnt<5; iCnt++) //remove "=" at 2
    {
        printf("Hello\n");// 4
    }
        
   //execution flow of program - 
   //1
   //2 4 3
   //2 4 3
   //2 4 3
   //2 4 3
   //2 4 3
   //2 after 2 loop stop

}
int main()
{
    Display();

    return 0;
}