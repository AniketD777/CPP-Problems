//Calculate height of binary tree => O(n) because called for n-nodes and calling each node carries 1 operation
#include<iostream>
#include<algorithm>
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

int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left)+1;//Will take count of height of every left side of tree 
    int right=height(root->right)+1;//Will take count of height of every right side of tree
    return max(left,right);
}
//              <OR>
/*
int height(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    return max(left,right)+1;
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
    
    cout<<height(root);
    return 0;
}
