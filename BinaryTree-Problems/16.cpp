//Balanced height binary tree -> ie. (leftNodeHeight-rightNodeHeight)<=1
//T.C.=> O(N) ie. no height() function 
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

bool checkBalanceTree(Node* root,int* height)
{
    int lh=0, rh=0;
    bool check=0;
    if(root==NULL)
    {
        //*height=0;  
        return 1; //Kyuki Null node balanced hota hai
    }
    checkBalanceTree(root->left,&lh);
    checkBalanceTree(root->right,&rh);
    if(abs(lh-rh)<=1) //abs built in function to find absolute value(+ve)
    {
        check=1;
    }
    *height=max(lh,rh)+1;

    return check;
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
    //root->right->right->right=new Node(69);
    //root->right->right->right->left=new Node(96);
    
    int height=0;
    bool chk=checkBalanceTree(root,&height);

    if(chk==1)
    {
        cout<<"Balanced!";
    }
    else
    {
        cout<<"Not-Balanced!";
    }

    return 0;
}
