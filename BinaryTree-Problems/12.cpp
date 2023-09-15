//Diameter of binary tree (Optimized approach) => O(n) (ie. jab hum height calc. karenge usi time hum diameter bhi calcu. kr denge so har node ke liye hum baar baar height then uske baad har node ke liye baar baar diameter calcu. krne se bach jaenge so we'll get a better optimized program)  
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

int diameter(Node* root,int* height)
{
    if(root==NULL)
    {
        *height=0;
        return 0;
    }
    int lh=0;
    int rh=0;
    int lDiameter=diameter(root->left,&lh);
    int rDiameter=diameter(root->right,&rh);

    int CurrDiameter=lh+rh+1;
    *height=max(lh,rh) + 1; //*height will eventually change lh or rh because lh or rh will be passed to function   
    
    return max(CurrDiameter,max(lDiameter,rDiameter));
    //max(lDiameter,rDiameter)=> In dono me se konsa side ka dia bada hai
    //max(CurrDiameter,max......)=>aur CurrDiam me se bhi konsa bada hai
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

    int height=0;
    cout<<diameter(root,&height)<<endl;
    
    return 0;
}
