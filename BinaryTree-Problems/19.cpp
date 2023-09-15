//Right view of binary tree
#include<iostream>
#include<queue>
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

void printRightView(Node* root)
{
    queue<Node*> Q;
    Q.push(root);
    while(!Q.empty())
    {
        int n=Q.size();
        for(int i=0;i<n;i++)
        {
            Node* curr=Q.front();
            Q.pop();
            if(curr->left!=NULL)
            {
                Q.push(curr->left);
            }
            if(curr->right!=NULL)
            {
                Q.push(curr->right);
            }
            if(i==n-1)
            {
                cout<<curr->data<<" ";
            }
        }
    }
}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->left=new Node(5);
    root->right->right=new Node(6);
    root->right->left->left=new Node(7);

    printRightView(root);
    
    return 0;
}
