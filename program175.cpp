//String Checking are equal or not
#include<iostream>
using namespace std;

bool strcmpX(char *src, char *dest)
{
    while((*src != '\0')&& (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        *src++;
        *dest++;
    }

    if(*src == '\0' && *dest == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }    
}    

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet;

    cout<<"Enter 1st String:"<<endl;
    cin.getline(Arr,20); // old function of cpp

    cout<<"Enter 2nd String:"<<endl;
    cin.getline(Brr,20); // old function of cpp

    bRet = strcmpX(Arr, Brr);

    if(bRet == true)
    {
        cout<<"\nStrings are Equal....!"<<endl;
    }
    else
    {
        cout<<"\nStrings are not Equal...!"<<endl;
    }
    return 0;
}
