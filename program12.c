#include<stdio.h>

//Demonstration of SEQUENCE

void Display(); // Function Declaration(known as forward declaration)

int main()
{
    Display();      // Function call

    return 0;
}

void Display()      //function Defination  // why use void? when the function not written anything
                // service provider function
{
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
}