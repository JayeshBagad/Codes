// Accept String from user and reverse it using third variable(temp)
#include<iostream>
using namespace std;

void strrevX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter 1st String:"<<endl;
    cin.getline(Arr,20); // old function of cpp

    cout<<"Enter 2n String:"<<endl;
    cin.getline(Brr,20);

    strcpyX(Arr, Brr);
    
    cout<<"String After Reverse: "<<Arr<<endl;

    return 0;
}