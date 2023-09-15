//Level order traversal in Binary Tree(My Code using goto keyword)
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

vector<int> levelOrderTrav(Node* root)
{
    vector<int> travSeq;
    queue<Node*> Q;
    Q.push(root);
    Q.push(NULL);
    here://Control pointer comes here if queue Q is non empty
    while(Q.front()==NULL && !Q.empty())//We use while because last ke jo element honge unke left aur right NULL honge jo Q me push ho jaenge so to remove them all we did this until ek natural NULL na aajae (refer next statement) 
    {    //Q me already ek NULL hota hai agar usme koi element present nahi hota toh if it is of the form queue<Node*> (We have checked it ourself on the rough)                            
        //so will give segmentation fault if we try to remove that default NULL as well so need to specify until Q is non-empty
        Q.pop();
        if(Q.front()!=NULL)
        {
            Q.push(NULL);
        }
    }
    while(Q.front()!=NULL)
    {
        Q.push(Q.front()->left);
        Q.push(Q.front()->right);
        travSeq.push_back(Q.front()->data);
        Q.pop();
    }
    if(Q.empty())
    {
        return travSeq;
    }
    goto here;
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
    vector<int> res=levelOrderTrav(root);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
