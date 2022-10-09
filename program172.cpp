//Accept String and Toggle it

//OP- 
//String before toggle::ajay@kumar#Yadav
//String after toggle::AJAY@KUMAR#yADAV

#include<iostream>
using namespace std;

int strtoggleX(char str[])
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; // cuz adding asci value
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String:"<<endl;
    cin.getline(Arr,20); // old function of cpp

    strtoggleX(Arr);
    
    cout<<"String in Toggle Case: "<<Arr<<endl;

    return 0;
}