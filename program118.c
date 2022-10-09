// Singly Linear Linked List

/*
    //Used all this function Name in every linkedlist//

   /* InsertFirst
    InsertLast
    InsertAtPosition
                        &first (PNODE)
    DeleteFirst
    DeleteLast
    DeleteAtPosition*/
    
 //   Display
   // Count
//*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*
    1. Allocate memory for node
    2. Initailise the node
    3. Check whether LL is Empty or not
    4. If LL is empty then the new node is first node
    5. If LL contains atleast one node in it then store the address of previous of first node in the next pointer of new node
*/
void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn -> data = iNo;
    newn -> next = NULL;

    if(*Head == NULL)   // if LL is empty
    {
        *Head = newn;
    }
    else       // If LL contains atleast one node9
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL; // struct node* First = NULL;

    InsertFirst(&First,101);  // InsertFirst(60,     101);
    InsertFirst(&First,51);             //  addr      iNo      
    InsertFirst(&First,21);
    InsertFirst(&First,11);


    return 0;
}

//Rules for to write LinkedList
/*
    1. Use only dynamic memory allocations
    2. Dont write any technical syntax in main
    3. Dont use any global variables
    4. Be Careful while manipulating the First pointer.
    5. Pass the First pointer directly if the function is not going to modify the LL.(Display, Count)
    6. Pass the address of first pointer if the function is going to modify the LL.(InsertFirst,InsertLast... all other function)
*/