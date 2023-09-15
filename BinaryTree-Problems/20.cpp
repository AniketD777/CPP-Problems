//Left View of binary tree
//ie. print the leftmost node element for every successive level of tree
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

void printLeftView(Node* root)
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
        if(node1==NULL)
        {
            cout<<node2->data<<" ";
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

    printLeftView(root);

    return 0;
}
