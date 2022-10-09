#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct node
{
    int data;   // 4 memory
    struct node *next; // 8 byte memory
};

typedef struct node NODE; 
typedef struct node * PNODE;

//Old Name          New Name
//struct node       NODE
//struct node*      PNODE
// struct node**    PPNODE  **means pointer to pointer     
 
int main()
{
    //Static memory allocation
    NODE obj;

    //Dynamic memory allocation
    PNODE ptr = (PNODE)malloc(sizeof(NODE));
    //12   *8  =  
    obj.data = 11;  // object madhe value takne
    obj.next = NULL; //Direct accessing operator

    ptr -> data = 11; // Indirect accessing operator ->
    ptr -> next = NULL;

    return 0;
}