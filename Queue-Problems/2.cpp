//Queue data sturture (Linked List implementation)

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
       data=val;
       next=NULL;
    }
};

class queue
{
    node* front;
    node* back;
    public:
    queue()
    { 
        front=NULL;
        back=NULL;
    }

    void enqueue(int val)
    {
        node* n=new node(val);
        if(front==NULL)
        {
            front=n;
            back=n;
            return;
        }
        back->next=n;
        back=back->next;
    }

    void dequeue()
    {
        if(front==NULL)
        {
            cout<<"Queue Empty!";
            return;
        }
        node* toDelete=front;
        front=front->next;
        delete toDelete;
    }

    int peek()
    {
        if(front==NULL)
        {
            cout<<"Empty Queue!";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if(front==NULL)
        {
            return 1;
        }
        return 0;
    }
};

int main()
{
    queue Q;
    Q.enqueue(1);
    Q.enqueue(2);
    Q.enqueue(3);
    Q.enqueue(4);
    while(!Q.empty())
    {
       cout<<Q.peek()<<endl;
       Q.dequeue();
    }
    cout<<Q.empty();
    return 0;
}
