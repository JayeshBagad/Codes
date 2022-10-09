//Accept small letter string n convert it into Capital String
#include<iostream>
using namespace std;

int struprX(char str[])
{

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32; // cuz adding asci value
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String:"<<endl;
    cin.getline(Arr,20); // old function of cpp

    struprX(Arr);
    
    cout<<"String in Lower Case: "<<Arr<<endl;

    return 0;
}