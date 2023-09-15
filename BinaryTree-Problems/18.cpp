//Right view of binary tree
//ie. print the rightmost node element for every successive level of tree
//Node2 will maintain the NULL
//Node1 will always contain the left node of node2 and will check agar Node2 NULL hai, then the node where i am pointing is the rightmost node of that particular level
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
    Q.push(NULL);
    Node* node1=NULL;
    Node* node2=NULL;
    while(!Q.empty())
    {
        node1=node2;
        node2=Q.front();
        Q.pop();
        if(node2!=NULL)
        {
            if(node2->left!=NULL)
            {
                Q.push(node2->left);
            }
            if(node2->right!=NULL)
            {
                Q.push(node2->right);
            }
        }
        else if(!Q.empty())
        {
            Q.push(NULL);
        }
        if(node2==NULL)
        {
            cout<<node1->data<<" ";
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
