//Count nodes in a binary tree
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

int countNodes(Node* root)
{
    static int count=0;//To memorise the value of new count on every recursive call, So defined statically
    if(root==NULL)
    {
        return 0;
    }
    count++;
    countNodes(root->left);
    countNodes(root->right);
    return count;
}

//                           <OR>
/*
int countNodes(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }    
    return countNodes(root->left)+countNodes(root->right)+1;
}
*/

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    //root->right->right->left=new Node(8);
    //root->left->right->left=new Node(9);

    cout<<countNodes(root);
    return 0;
}
