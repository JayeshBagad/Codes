//FILE HANDLING Programs
//open the existing file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    char Fname[20];
    char Data[100];
    
    int fd = 0;         //file descriptor
    int iRet   = 0;
    printf("Enter file name to open: \n");
    scanf("%s",Fname);

    //      filename, octal no.
    fd = open(Fname,O_RDWR); //(system call)creat is command to create file
            
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1; //Failure
    }

    printf("File is sucessfully open with FD %d.\n",fd);

    printf("Enter the data that you want to write:\n");
    scanf(" %[^'\n']s",Data);
    
    iRet= write(fd,Data,strlen(Data));
    printf("%d bytes gets successfully opened by FD",iRet);
    return 0;
}