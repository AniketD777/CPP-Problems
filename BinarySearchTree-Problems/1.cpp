//Binary Search Trees (BSTs)
//Building a BST from a given set of array
#include<iostream>
#include<vector>
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

Node* BuildBST(Node* root,int ele)
{
    if(root==NULL)
    {
        return new Node(ele);
    }
    if(ele<root->data)
    {
        root->left=BuildBST(root->left,ele);
    }
    else
    {
        root->right=BuildBST(root->right,ele);
    }
    return root;
}

void inorder(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    vector<int> arr={5,1,3,4,2,7};
    Node* root=NULL;
    root=BuildBST(root,arr[0]);
    int i=1;
    while(i<arr.size())
    {
        BuildBST(root,arr[i]);
        i++;
    }
    inorder(root); //inorder sequence of a BST is always a sorted array
}
