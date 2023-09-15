//To detect a cycle in a linked list(Hare-Tortoise Algorithm)
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
        node* next=NULL;
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
    cout<<"NULL"<<endl;
}

void makeCycle(node* &head,int loopAt)//Forming a cyclic link at a point
{
    node* lastnode=head;
    node* temp=head;
    while(lastnode->next!=NULL)
    {
        lastnode=lastnode->next;
    }
    
    while(temp->data!=loopAt)
    {
        temp=temp->next;
    }
    lastnode->next=temp;
}

bool detect(node* &head)  //Detection function
{
    node* tortoise=head;//Slower
    node* hare=head;//Faster
    while(hare!=NULL && hare->next!=NULL)
    {
        tortoise=tortoise->next;//Move by one step
        hare=hare->next->next;//Move by two steps
        if(hare==tortoise)//When at same position
        {
            return true;
        }
    }
    return false;
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
    makeCycle(head,2);
    cout<<detect(head);
    return 0;
}

