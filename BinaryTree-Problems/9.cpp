//Sum of all nodes in a binary tree
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

int sumOfNodes(Node* root)
{
    static int sum=0;
    if(root==NULL)
    {
        return 0;
    }
    sum+=root->data;
    sumOfNodes(root->left);
    sumOfNodes(root->right);
    return sum;
}

//                   <OR>
/*
int sumOfNodes(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }    
    return countNodes(root->left)+countNodes(root->right)+root->data;
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
    root->right->right->left=new Node(8);
    root->left->right->left=new Node(9);

    cout<<sumOfNodes(root);
    return 0;
}
