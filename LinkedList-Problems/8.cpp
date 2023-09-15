//Removal of cycle from a linked list(Hare-Tortoise Algorithm)
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

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    head=n;
    head->next=temp;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

void formCycle(node* &head,int pos)
{
    node* temp=head;
    node* last=head;
    int count=1;
    while(count<pos)
    {
        temp=temp->next;
        count++;
    }
    while(last->next!=NULL)
    {
        last=last->next;
    }
    last->next=temp;
}

void removeCycle(node* &head)
{
    node* hare=head;
    node* tort=head;
    while(hare!=NULL && hare->next!=NULL)//Jab tk 2 steps ja skta hai
    {
        tort=tort->next;//Moves single step
        hare=hare->next->next;//Moves double steps
        if(hare==tort)
        {
            hare=head;
            while(hare->next!=tort->next)//We don't check hare==tort
               //because we need to set tort->next=NULL to break the
               //cyclic link ie. where they are actually meeting
            {  
                tort=tort->next;//Both moves single step
                hare=hare->next;//Both moves single step
            }
            tort->next=NULL;
            return;    
        }
    }
}

int main()
{
    node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtHead(head,0);
    display(head);
    formCycle(head,3);
    //display(head);
    removeCycle(head);
    cout<<"Cycle removed!\n";
    display(head);
    
    return 0;
}
