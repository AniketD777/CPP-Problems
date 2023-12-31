//Reversing the Linked list recursively
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

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    node* temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

node* reverseRecursively(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* newhead=reverseRecursively(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return newhead;
}

int main()
{
    node* head=NULL;
    cout<<"Initially:\n";
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    cout<<endl<<"Finally:\n";
    node* newhead=reverseRecursively(head);
    display(newhead);
    return 0;
}
