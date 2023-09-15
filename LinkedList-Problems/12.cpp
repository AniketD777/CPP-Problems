//To find intersection point of two joined singly linked lists
//(Time complexity => O(nxm))
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
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
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

void formIntersection(node* &head1,node* &head2,int pos)
{ 
    node* temp1=head1;
    node* temp2=head2;
    int count=1;
    while(count<pos)
    {
        temp1=temp1->next;
        count++;
    }
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp1;
} 

bool checkIntersection(node* head1,node* head2)
{
    node* temp1=head1;
    node* temp2=head2;
    int lengthOfH1=0;
    int lengthOfH2=0;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
        lengthOfH1++;
    }
    while(temp2->next!=NULL)
    {
        temp2=temp2->next;
        lengthOfH2++;
    }
    
    node* ptr1;
    node* ptr2;
    if(lengthOfH1>lengthOfH2)
    {
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        ptr1=head2;
        ptr2=head1;
    }
    node* temp=ptr2;
    while(ptr1!=NULL)
    {
        ptr2=temp;//because we need to traverse ptr2 from starting for every
                  //node in ptr1
        while(ptr2!=NULL)
        {
            if(ptr1->data==ptr2->data)
            {
                cout<<"Intersection at: "
                <<ptr1->data<<endl;
                return true;
            }
            ptr2=ptr2->next;
        }
        ptr1=ptr1->next;
    }
    return false;
}

int main()
{
    cout<<"Before Intersection:\n";
    node* headOfList1=NULL;//For Singly linked list1
    insertAtHead(headOfList1,5);
    insertAtHead(headOfList1,4);
    insertAtHead(headOfList1,3);
    insertAtHead(headOfList1,2);
    insertAtHead(headOfList1,1);
    display(headOfList1);
    node* headOfList2=NULL;//For Singly linked list2
    insertAtHead(headOfList2,6);
    insertAtHead(headOfList2,7);
    display(headOfList2);
    
    cout<<"After Intersection:\n";
    formIntersection(headOfList1,headOfList2,4);
    display(headOfList1);
    display(headOfList2);

    cout<<checkIntersection(headOfList1,headOfList2);
    return 0;
}
