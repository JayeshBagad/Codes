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
    fd = open(Fname,O_RDWR | O_APPEND); //(system call)creat is command to create file
            
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1; //Failure
    }

    printf("File is sucessfully open with FD %d.\n",fd);
    
    iRet= write(fd,Data,10);

    printf("%d bytes gets successfully read from the file\n",iRet);

    printf("Data from file is \n");
    write(1,Data,iRet);

    //0 STDIN Keyboard
    //1 STDOUT Monitor but display
    //2 STDERR Monitor but error

    return 0;
}