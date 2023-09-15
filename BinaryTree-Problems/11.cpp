//To calculate diameter of binary tree => O(n^2)
//Diameter is the maximum distance between any two nodes just like in a circle ie. max distance btw any two points on circle
#include<iostream>
#include<algorithm>
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

int diameter(Node* root)
{  
    if(root==NULL)
    {
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);
    int diametCount=leftHeight+rightHeight+1;

    int leftDiameter=diameter(root->left);
    int rightDiameter=diameter(root->right);
    int maxDia=max(leftDiameter,rightDiameter);//left wala max hai ya right wala
    return max(diametCount,maxDia);//Aur diameterCount me se bhi konsa wala max hai
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
    
    cout<<diameter(root);
 
    return 0;
}
