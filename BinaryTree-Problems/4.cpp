//Build Tree from Postorder and Inorder sequence
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

int search(vector<int> inorder,int start, int end, int curr)
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

Node* buildTree(vector<int> postorder,vector<int> inorder,int start,int end)
{
    static int i=postorder.size()-1;
    if(start>end)
    {
        return NULL;
    }
    int curr=postorder[i];
    i--;
    Node* node=new Node(curr);
    if(start==end)
    {
        return node;
    }
    int pos=search(inorder,start,end,curr);
    node->right=buildTree(postorder,inorder,pos+1,end);//*Note:- Pehle right subtree build hoga and then left because Postorder ko end se traverse kar rahe hai and order is (left->right->root)
    node->left=buildTree(postorder,inorder,start,pos-1);//So if we traverse from back the order is root right left
    return node;
}

void inorderPrint(Node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout<<root->data<<" ";
    inorderPrint(root->right);
}

int main()
{
    vector<int> postorder={4,2,5,3,1};
    vector<int> inorder={4,2,1,5,3};
    Node* root=buildTree(postorder,inorder,0,4);
    inorderPrint(root);
    return 0;
}
