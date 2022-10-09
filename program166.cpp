//Accept string from user count number of capital characters

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 'A')&&(*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter String:"<<endl;
    cin.getline(Arr,20); // old function of cpp
    
    iRet = CountCapital(Arr); //Display(100)
    cout<<"Number of capital characters are:"<<iRet<<endl;

    return 0;
}
