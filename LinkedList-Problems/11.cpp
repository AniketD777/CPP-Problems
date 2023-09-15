//Append last 'k' nodes of a link at the starting of the link
//Note- Indexing position is from '1' not from '0'
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

void append(node* &head,int pos)
{
    if(pos==1)
    {
        return;
    }
    node* temp=head;
    int count=1;
    while(count<pos)
    {
        temp=temp->next;
        count++;
    }
    (temp->prev)->next=NULL;//Temp ka prev node becomes the last node
    temp->prev=NULL;//To specify the temp node as the head node
    node* temp2=temp;
    while(temp2->next!=NULL)//To traverse to the last node
    {                       
        temp2=temp2->next;
    }
    temp2->next=head;//connect last node to head of the 
                     //original node
    head->prev=temp2;
    head=temp;//Finally specifying that the given position is the head
    
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
    append(head,2);
    display(head);

    return 0;
}
