//String concatenation
#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

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

    cout<<"Enter 2nd String:"<<endl;
    cin.getline(Brr,20); // old function of cpp

    strcatX(Arr, Brr);
    
    cout<<"String After Reverse: "<<Arr<<endl;

    return 0;
}
