#include<stdio.h>
#include<stdlib.h>

//Structure declaration
struct node
{
    int data;   // 4 memory
    struct node *next; // 8 byte memory
};

int main()
{
    //Static memory allocation
    struct node obj;

    //Dynamic memory allocation
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    // ptr used 8 bytes divided into 8 bytes parts
    obj.data = 11;
    obj.next = NULL; //Direct accessing operator

    ptr -> data = 11; // Indirect accessing operator ->
    ptr -> next = NULL;

    return 0;
}