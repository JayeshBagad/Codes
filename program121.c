// Singly linear link list with all function
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
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);
                                                 //                    4+8 
    newn -> data = no;
    newn -> next = NULL;

    if(*head == NULL) // LL is empty here
    {
        *head = newn;
    }
    else // at least contain one node
    {
       //travel till last node
       //store address of new node in the next pointer of last node.
        temp = *head;

        while(temp -> next != NULL)

        {
           temp = temp -> next;
        }
        temp -> next =newn;
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

void DeleteFirst(PPNODE head) //call by address
{
    //If LL is empty then retun
    //If LL Contains atleast one node then
    //Store the address of second node in the first pointer through head
    //And Delete the first
    PNODE temp = NULL;

    if (*head == NULL) // LL is empty
    {
        return;
    }
    else    //LL contains atleast one node.
    {
        temp = *head;
        *head = temp -> next;

        free(temp); // deleting first node that we store
    }
}

void DeleteLast(PPNODE head) //call by address
{
    //if LL is empty then return
    //If LL Contains one node then delete that node and return
    //if LL Contains more than 1 node then travel till second last node & delete last node
    PNODE temp = NULL;

    if(*head == NULL) // LL is empty
    {
        return;
    }
    else if ((*head) ->next == NULL)// LL Contains one node
    {
        free(*head);
        *head = NULL; // need to used cuz garbage address(segmentation false)
    }
    else    //if LL Contains more than 1 node
    {
        temp =  *head;
           //   200  ->300   ->400  != NULL
        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp ->next);
        temp -> next =NULL;

        temp = *head;

    }
}

void InsertAtPos(PPNODE head, int no, int pos)
{
    // Consider no of nodes are 4
    //If Position is invalid the return directly
    //If position is 1 then call Insertfirst
    //If postion is N+1 then call Insertlast (position is 5 cuz of 4 nodes)

    int size = 0, iCnt =0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size  = Count(*head);

    if ((pos < 1) || (pos > (size+1)))  // its filter for wrong position
    {
        printf("Position is Invalid.\n"); 
        return;
    }

    if(pos == 1)  // for invalid position of LL nodes
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else //main logic
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE)); //newn = (struct node *)malloc(12);
                                            //                    4+8 
        newn -> data = no;
        newn -> next = NULL;   

        temp = *head;

        for(iCnt = 1; iCnt <pos-1; iCnt++)
        {
            temp = temp -> next;
        }

        newn -> next = temp -> next;
        temp -> next =newn;
    }
    
}

// not need data here(no)
void DeleteAtPos(PPNODE head, int pos)
{
    // Consider no of nodes are 4

    //If Position is invalid the return directly(<1 OR || > 4)
    //If position is 1 then call deletefirst
    //If postion is 4 then call Insertlast (position is 4 cuz of 4 nodes)

    int size = 0, iCnt =0;
    
    PNODE temp = NULL;
    PNODE tempdelete = NULL;
    size  = Count(*head);

    if ((pos < 1) || (pos > (size)))  // its filter for wrong position
    {
        printf("Position is Invalid.\n"); 
        return;
    }

    if(pos == 1)  // for invalid position of LL nodes
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else //main logic
    {  
        temp = *head;

        for(iCnt = 1; iCnt <pos-1; iCnt++)
        {
            temp = temp -> next;
        }

        tempdelete = temp -> next;
        temp -> next =temp -> next ->next;

        free(tempdelete);
    }
}


int main()
{
    int iRet = 0;
    PNODE first =NULL;

    InsertFirst(&first,101); // Call by address cuz of &first
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);

    DeleteAtPos(&first,3);

    Display(first);  // Call by value cuz of first

    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);
    
    InsertFirst(&first,1);

    Display(first);  // Call by value cuz of first

    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);
    
    Display(first); 
    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);

    Display(first);  // Call by value cuz of first

    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);

    DeleteLast(&first);
    Display(first);  // Call by value cuz of first

    iRet=  Count(first);
    printf("Number of Nodes are: %d\n",iRet);
 
    return 0;
}

