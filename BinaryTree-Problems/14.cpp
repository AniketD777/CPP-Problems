//To check complete binary tree or not
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

bool checkBalancedTree(Node* root)
{
    queue<Node*> Q;
    int evenCounter=0;
    int sizeCounter=1;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty())
    {
        Node* node=Q.front();
        Q.pop();
        if(node!=NULL)
        {
            if(node->left!=NULL)
            {
                Q.push(node->left);
                evenCounter++;
            }
            if(node->right!=NULL)
            {
                Q.push(node->right);
                evenCounter++;
            }
        }
        else if(!Q.empty())
        {
            Q.push(NULL);
        }
        if(node==NULL)
        {
            if(evenCounter!=(sizeCounter*2) && !Q.empty())//We have to check that Q is
            {//not empty because when the Q is empty is no more element in tree and then definitely evenCounter=0 ie. not equal to 2*sizeCounter
                return 0; //When Binary Tree not balanced
            }
            sizeCounter=evenCounter;
            evenCounter=0;
        }
    }
    return 1;
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
    //root->left->left->left=new Node(8);

    int check=checkBalancedTree(root);
    if(check==0)
    {
        cout<<"Not-Complete!";
    }
    else
    {
        cout<<"Complete!";
    }

    return 0;
}
