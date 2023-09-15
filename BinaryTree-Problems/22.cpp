//Lowest Common Ancestor (LCA)
//O(N^2) => as we are looking for searchEle for every other node repeatedly
#include<iostream>
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

bool trackPath(Node* root,int searchEle,vector<int> &path) //Passing &path because we will be modifying values
{
    if(root==NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if(root->data==searchEle)
    {
        return true;
    }
    if(trackPath(root->left,searchEle,path) || trackPath(root->right,searchEle,path))
    {
        return true;
    }
    path.pop_back();//Because left me ya right me milega so can consider a single path only. So, Mila to thik warna bhar nikalo aur uske opposite side ke liye apne aap recursive call aajaega
    return false;
}

int LCA(Node* root,int n1,int n2)
{
    vector<int> pathFORn1, pathFORn2;
    if(!trackPath(root,n1,pathFORn1) || !trackPath(root,n2,pathFORn2))
    {//agar kisi bhi ek ka path exist nhi kiya then LCA is not possible 
        return -1;
    }
    int PathChange;
    for(PathChange=0;PathChange<pathFORn1.size() && pathFORn2.size();PathChange++)
    {
        if(pathFORn1[PathChange]!=pathFORn2[PathChange])
        {
            break;
        }
    }
    return pathFORn1[PathChange-1]; //Because upto the previous elements the path was the same(ie. elements were matching) then it finally changed at PathChange
}    //return pathFORn2[PathChange-1] can also be taken no problem

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    if(LCA(root,6,7)==-1)
    {
        cout<<"No LCA possible!";
    }
    else
    {
       cout<<LCA(root,6,7)<<endl;
    }
    return 0;
}
