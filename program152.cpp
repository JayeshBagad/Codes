// Program in Singly circular LinkedList

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
//typedef struct node ** PPNODE;


class SinglyCLL // 16 byte size 
{
    private:        // Characteristics // dont want to lose address here so we used private
        PNODE Head;
        PNODE Tail;

    public:     // behaviours
        SinglyCLL()     //default constructor
        {
            Head = NULL;
            Tail = NULL;
        }

        void InsertFirst(int no)
        {

        }
        void InsertLast(int no)
        {

        }
        void InsertAtPos(int no, int ipos)
        {

        }
        void DeleteFirst()
        {

        }
        void DeleteLast()
        {  

        }
        void DeleteAtPos(int ipos)
        {

        }
        void Display()
        {

        }
        int Count()
        {
            
            return 0;
        }

};

int main()
{
    SinglyCLL obj;

    return 0;
}