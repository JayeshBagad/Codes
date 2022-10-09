// How to travel string to print white space also 
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
    cin.getline(Arr,20); // old function of cpp
    
    Display(Arr); //Display(100)

    return 0;
}
