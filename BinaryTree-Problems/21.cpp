//Shortest distance between any two nodes of the binary tree
//Refer 27.15.1.cpp first for LCA concept and then do this one
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

bool trackPath(Node* root,int searchEle,vector<int> &path)
{
    if(root==NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if(root->data==searchEle)
    {
        return true;
    }
    if(trackPath(root->left,searchEle,path) || trackPath(root->right,searchEle,path))
    {
        return true;
    }
    path.pop_back();
    return false;
}

int DistFromLCA(Node* root,int n1,int n2)  //LCA-> Least common ancestor
{
    vector<int> pathFORn1, pathFORn2;
    if(!trackPath(root,n1,pathFORn1) || !trackPath(root,n2,pathFORn2))
    {
        return -1;
    }
    int pathChange=0;
    while(pathFORn1[pathChange]==pathFORn2[pathChange])
    {
        pathChange++;
    }

    //Now to calculate distance between the nodes and LCA we can simply use the pathFORn1 and pathFORn2 attained
    int d1=0, d2=0;//ie. we will traverse from the LCA element towards n1 in pathFORn1 and from LCA towards n2 in pathFORn2
    int i=pathChange-1;//and the distance we traversed from LCA to n1 and n2, then their sum will be the least dist. b/w them
    while(pathFORn1[i]!=n1)
    {
        d1++;
        i++;
    }
    i=pathChange-1;
    while(pathFORn2[i]!=n2)
    {
        d2++;
        i++;
    }
    return d1+d2;
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
    
    int a=7, b=6;
    if(DistFromLCA(root,a,b)==-1)
    {
        cout<<"One of the element doesn't exist!";
    }
    else
    {
        cout<<DistFromLCA(root,a,b);
    }

    return 0;
}
