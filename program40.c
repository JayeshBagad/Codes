int CountFactor(int iNo)
{
    int iCnt=0;
    int iFactCnt=0;

    if(iNo<0)
        {
            iNo= -iNo;  // updater
        }

    for(iCnt=1; iCnt <= iNo/2; iCnt++)
    {
       
        if((iNo % iCnt)==0)
        {
            iFactCnt++;
        }
    }
    return iFactCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    iRet = CountFactor(iValue);
    
}
