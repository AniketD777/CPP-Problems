//Circular Linked list
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
    node* temp=head;
    node* n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    n->next=head;
    head=n;
    temp->next=head;
}

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void display(node* head)
{
    node* temp=head;
    do//Do while loop is used because we need to print the last node as
    { //well after which it becomes cyclic-
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);//To feel replace 'head' as NULL
    cout<<"NULL\n";
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    insertAtHead(head,0);
    display(head);

  return 0;
}
