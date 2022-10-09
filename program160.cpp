// How to travel string using for while loop 
#include<iostream>
using namespace std;

void Display(char str[])
{
    int i = 0;

    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;
    }
}

int main()
{
    char Arr[20];
    
    cout<<"Enter String:"<<endl;
    cin>>Arr;

    Display(Arr); //Display(100)

    return 0;
}
