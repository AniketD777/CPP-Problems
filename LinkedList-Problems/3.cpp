//Deletion of a node in Linked list
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
    cout<<"NULL"<<endl;
}

void deleteHead(node* &head)
{
    node* toDelete=head;//To set head to delete
    head=head->next;//Now to move head pointer to nextptr such that to delete the 
                    //initially defined head
    delete toDelete;
}

//Deleting the kth element of the LinkedList
void deletion(node* &head,int deleteVal)
{
    node* temp=head;
    if(temp==NULL)//If no nodes present(ie. Empty LinkedList)
    {
        return;
    }
    if(head->data==deleteVal)//If the 1st node is to be deleted
    {
        deleteHead(head);
    }
    while(temp->next->data!=deleteVal)
    {
        temp=temp->next;
    }
    node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}
int main()
{
    node* head=NULL;
    cout<<"Initially:\n";
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    display(head); 
    cout<<"Finally:\n";
    deletion(head,1); 
    display(head); 
    return 0;
}
