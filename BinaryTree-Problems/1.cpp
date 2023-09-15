//Binary tree structure formation
#include<iostream>
using namespace std;

struct Node //struct datatype like class but no data privacy and is a
{           //collection of any form of datatype
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    Node* root=new Node(1);       //      1
    root->left=new Node(2);       //    2  3 
    root->right=new Node(3);      

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;

    root->left->left=new Node(5);
    
    cout<<root->left->left->data;

    return 0;
}
