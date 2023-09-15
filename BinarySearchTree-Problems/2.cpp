//Search in a BST 
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

Node* search(Node* root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(root->data==key)
    {
        return root;
    }
    
    //If key<rootValue
    if(key<root->data)
    {
        return search(root->left,key);
    }
    //If key>rootValue
    return search(root->right,key);
}    

int main()
{
    vector<int> arr={5,1,3,4,2,7};
    Node* root=NULL;
    root=BuildBST(root,arr[0]);
    int i=5;
    while(i<arr.size())
    {
        BuildBST(root,arr[i]);
        i++;
    }

    Node* temp=search(root,5);
    if(temp!=NULL)
    {
        cout<<"Key Found!";
    }
    else
    {
        cout<<"Key Not-Found!";
    }
    return 0;
}
