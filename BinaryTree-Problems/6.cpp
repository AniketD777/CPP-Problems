//Level order traversal in Binary Tree
#include<iostream>
#include<queue>
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

vector<int> levOrdTrav(Node* root)
{
    vector<int> res;
    if(root==NULL)
    {
        return res;
    }
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    while(!Q.empty())
    {
        Node* node=Q.front();
        Q.pop();
        if(node!=NULL)
        {
            res.push_back(node->data);
            if(node->left!=NULL) //Agar kuch hai toh not NULL
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
        }
    }
    return res;
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
    vector<int> res=levOrdTrav(root);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
