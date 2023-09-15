//Preorder,Inorder and Postorder traversal in a Binary Tree
#include<iostream>
using namespace std;

struct Node //Must be declared at top
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

void preorder(struct Node* root)
{
    if(root==NULL)//root->data!=NULL But when root==NULL=> Avoid this mistake
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right); 
}

void inorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct Node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root=new Node(1);          //          1        
    root->left=new Node(2);          //                  
    root->right=new Node(3);         //        2   3      
    root->left->left=new Node(4);    //                   
    root->left->right=new Node(5);   //      4  5 6  7    
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    return 0;
}
