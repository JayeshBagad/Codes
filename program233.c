//FILE HANDLING Programs
//Creating File
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;         //file descriptor

    printf("Enter file name to create: \n");
    scanf("%s",Fname);
    //      filename, octal no.
    fd = creat(Fname,0777); //(system call)creat is command to create file
   // 0, 7-for owner, 7- for group-, 7-for others (permissions)
    //     0- 0 cuz of octal 4-read, 2-write, 1-execute  4+2+1= '7' thats why use 0777         
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1; //Failure
    }

    printf("File is sucessfully created with FD %d.\n",fd);
    return 0;
}