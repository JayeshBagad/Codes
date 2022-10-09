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

        //                      no is jo insert kayrycha to
void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);
                                                 //                    4+8 
    newn -> data = no;
    newn -> next = NULL;

    if(*head == NULL) // LL is empty here
    {
        *head = newn;
    }
    else
    {
        newn -> next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
/*
  //  1. Allocate memory for node
  //  2. Initailise the node

  //  3. Check whether LL is Empty or not

  //  4. If LL is empty then the new node is first node so update its address in 1st pointer through head
  
  //if LL is not empty then  
  //travel till last node of LL
  //store address of

*/
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);
                                                 //                    4+8 
    newn -> data = no;
    newn -> next = NULL;

    if(*head == NULL) // LL is empty here
    {
        *head = newn;
    }
    else
    {
       //Code
    }
}

void Display(PNODE head)
{
    printf("Elements from Linked List are:\n");

    while (head !=NULL)
    {
        printf("| %d |->",head->data);
        head = head ->next;
    }
    printf("|NULL|\n");
    
}

int Count(PNODE head)
{
    int iCnt = 0;

    while (head !=NULL)
    {
        iCnt++;
        head = head ->next;
    }
    return iCnt;
    
}

int main()
{
    int iRet = 0;
    PNODE first =NULL;

    InsertFirst(&first,101); // Call by address cuz of &first
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);  // Call by value cuz of first

    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);
    
    InsertFirst(&first,1);

    Display(first);  // Call by value cuz of first

    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);
    return 0;
}

