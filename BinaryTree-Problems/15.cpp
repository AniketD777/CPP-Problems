//Balanced height binary tree -> ie. (leftNodeHeight-rightNodeHeight)<=1
//If any one of the node is not balanced then the whole tree is not balanced
//T.C.=> O(N^2) height() being called for every successive node
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

int abs(int lHeight,int rHeight)//To return positive or magnitude of their difference
{
    if(lHeight>rHeight)
    {
        return (lHeight-rHeight);
    }

    return (rHeight-lHeight);
}

int height(Node* root)
{ 
    if(root==NULL)
    {
        return 0; 
    }
    int left=height(root->left)+1;
    int right=height(root->right)+1;
    return max(left,right);
}

bool checkBalanced(Node* root)
{
    if(root==NULL)
    {
        return 1;//Agar Null hua that means it is balanced kyuki left aur right nodes hai hi nahi
    }
    int lHeight=height(root->left);//We are checking these conditions first before the recursive call because applying top down approach
    int rHeight=height(root->right);//agar upar hi koi node unbalance ho gya then simply the tree becomes unbalanced
    int check=abs(lHeight,rHeight); //to check lHeight-rHeight<=1
    if(check<=1)
    {
        checkBalanced(root->left);
        checkBalanced(root->right);
    }
    else
    {
        //cout<<"Not-balanced!";
        return 0;
    }
    return 1;
}

int main()
{
    Node* root=new Node(1);
    //root->left=new Node(2);
    root->right=new Node(3);
    //root->left->left=new Node(4);
    //root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    root->right->right->right=new Node(69);
    root->right->right->right->left=new Node(96);

    bool chk=checkBalanced(root);
    if(chk==0)
    {
        cout<<"Not-Balanced!";
    }  
    else
    {
        cout<<"Balanced!";
    }

    return 0;
}
