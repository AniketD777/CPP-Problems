//Build Binary Tree from Preorder and Inorder sequence
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


int search(int inorder[],int start,int end,int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

Node* buildTree(int preorder[],int inorder[],int start,int end)
{
    static int idx=0;//To get it's every updated value memorized incase of every 
                    //recursive call
    if(start>end)
    {
        return NULL;
    }
    int curr=preorder[idx];
    idx++;
    Node* node=new Node(curr);
    if(start==end)
    {
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->left=buildTree(preorder,inorder,start,pos-1);//Because if pos represent 
    //the root element then start se uske pos-1 tak ke saare element lie in left 
    //subtree part and pos+1 se end tak lie in right subtree
    node->right=buildTree(preorder,inorder,pos+1,end);
    return node;
}            

void Preorder(Node* root) //Just for checking the result that it matches given  
                         //preorder sequence or not
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

int main()
{  
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(preorder,inorder,0,4);
    //To check
    Preorder(root);//To check program result matches the given preorder 
                  //sequence or not
    return 0;
}
