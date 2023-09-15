//Sum replacement in binary tree
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void sumRep(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    sumRep(root->left);
    sumRep(root->right);
    if(root->left!=NULL) //Agar root NULL hua then condn won't hit
    {
        root->data+=root->left->data;
    }
    if(root->right!=NULL) //Agar root NULL hua then condn won't hit
    {
        root->data+=root->right->data;
    }
}
 
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    sumRep(root);

    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<" "
    <<root->left->left->data<<endl;

    return 0;
}
