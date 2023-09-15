//Sum at kth level of the binary tree
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

int sumAtKth(Node* root,int k)
{
    if(root==NULL)
    {
        return 0;
    }
    queue<Node*> Q;
    int counter=0;
    int sum=0;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty())
    {
        Node* node=Q.front();
        Q.pop();
        if(node!=NULL)
        {
            if(counter==k)
            {
                sum+=node->data;
            }
            if(node->left!=NULL)
            {
                Q.push(node->left);
            }
            if(node->right!=NULL)
            {
                Q.push(node->right);
            }
            
        }
        else if(!Q.empty())
        {
            Q.push(NULL);
            counter++;
        }
    }
    return sum;
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
    root->right->right->left=new Node(8);
    root->left->right->left=new Node(9);
    cout<<sumAtKth(root,3)<<endl;
    return 0;
}
