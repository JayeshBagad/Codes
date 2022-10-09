// Count string length using strlenX (X is used as our function)
#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
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
    
    iRet = strlenX(Arr); //Display(100)
    cout<<"String Length is:"<<iRet<<endl;

    return 0;
}
