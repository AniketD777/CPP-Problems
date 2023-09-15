//Deletion in Doubly Linked list
#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
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
    temp->prev=head;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<" ==>DoublyLinked"<<endl; 
}

void deleteAtHead(node* &head)
{  
    node* toDelete=head;
    node* temp=head->next;
    delete head;
    temp->prev=NULL;
    head=temp;//To set the new head ie. from next position of
}             //deleted value

void deletion(node* &head,int DeleteVal)
{
    node* temp=head;
    if(head->data==DeleteVal)
    {
        deleteAtHead(head);
        return;
    }
    while(temp->data!=DeleteVal)
    {
        temp=temp->next;
    }
    node* todelete=temp;
    node* rightNode=temp->next;//Delete wale ke right wala
    node* leftNode=temp->prev;//Delete wale ke left wala
    
    leftNode->next=rightNode;
    if(temp->next!=NULL)//Condition to delete last position node
    {
       rightNode->prev=leftNode;
    }
    delete todelete;
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
    deletion(head,0);
    display(head);
    return 0;
}
