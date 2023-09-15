//Reversing from every kth node(Eg. 1->2->3->4->NULL)
//                                      || 
//                                      \/
//For k=2nd position               (2->1->4->3->NULL)
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

node* reverseAtk(node* &head,int k)
{
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    
    int count=0;
    while(currptr!=NULL && count<k)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        
        count++;
    }

    if(nextptr!=NULL)
    {
    head->next=reverseAtk(nextptr,k);//we connected the head
    }// with recursive call of reverseAtk because head remains 
// the same, to vary head we are actually using the prevptr.
// So, the head originally contains the actual head which was
// declared at the beginning. ie. 2->1->(now connect this to
//                                       the recursive call)  
//Here 1 is the actual head declared at the beginning
//whereas 2 is the new head pointed by prevptr.
    return prevptr;
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
    node* newHead=reverseAtk(head,2);
    display(newHead);
    return 0;
}
