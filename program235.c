//FILE HANDLING Programs
//write data in that file

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
    int iRet = 0;

    printf("Enter file name to create: \n");
    scanf("%s",Fname);

    printf("Enter the data that you want to write: \n");
    scanf(" %[^'\n']s",Data);

    //      filename, octal no.
    fd = creat(Fname,0777); //(system call)creat is command to create file
            
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1; //Failure
    }

    printf("File is sucessfully created with FD %d.\n",fd);

    iRet = write(fd,Data,strlen(Data));
    printf("%d byte sucessfully written in the file.\n",iRet);
    return 0;
}