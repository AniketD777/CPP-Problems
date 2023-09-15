//Balanced height binary tree -> ie. (leftNodeHeight-rightNodeHeight)<=1
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

bool chkBalance(Node* root,int* height)
{
    int lh=0, rh=0;
    if(root==NULL)
    {
        return true;//Kyuki Null node balanced hota hai
    }
    if(chkBalance(root->left,&lh)==false)//Ek bhi node false hua then pura tree hi not balanced hoga
    {
        return false;
    }
    if(chkBalance(root->right,&rh)==false)
    {
        return false;
    }

    *height=max(lh,rh)+1;
    if(abs(lh-rh)<=1)  //Check at every node ie. at every recursive call
    {
        return true;
    }
    else
    {
        return false;
    }
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
    root->right->right->right=new Node(69);
    root->right->right->right->left=new Node(96);
    
    int height=0;
    bool chk=chkBalance(root,&height);

    if(chk==true)
    {
        cout<<"Balanced!";
    }
    else
    {
        cout<<"Not-Balanced!";
    }

    return 0;
}
