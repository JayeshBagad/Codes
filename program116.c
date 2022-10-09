#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct node
{
    int data;   // 4 memory
    struct node *next; // 8 byte memory
};

typedef struct node NODE; 

int main()
{
    //Static memory allocation
    NODE obj;

    //Dynamic memory allocation
    NODE *ptr = (NODE *)malloc(sizeof(NODE));
    //12   *8  =  
    obj.data = 11;  // object madhe value takne
    obj.next = NULL; //Direct accessing operator

    ptr -> data = 11; // Indirect accessing operator ->
    ptr -> next = NULL;

    return 0;
}