//Accept capital letter string n convert it into Small letters
#include<iostream>
using namespace std;

int strlwrX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32; // cuz adding asci value
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter String:"<<endl;
    cin.getline(Arr,20); // old function of cpp

    strlwrX(Arr);
    
    cout<<"String in Lower Case: "<<Arr<<endl;

    return 0;
}