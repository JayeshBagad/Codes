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
    char Data[10];
    int fd = 0;         //file descriptor
    int iRet   = 0;

    printf("Enter file name to open: \n");
    scanf("%s",Fname);

    //      filename, octal no.
    fd = open(Fname,O_RDWR | O_APPEND); //(system call)creat is command to create file
            
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1; //Failure
    }
    printf("File is sucessfully open with FD %d.\n",fd);

    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));
    read(fd,Data,sizeof(Data));

    return 0;
}