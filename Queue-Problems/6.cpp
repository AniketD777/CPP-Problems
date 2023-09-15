//Stack Data Structure (Using Queue implementation)
//Method 1 (Making push() operation costly)

#include<iostream>
#include<queue>
using namespace std;

class stack
{
    int N=0; //To maintain size of stack
    queue<int> q1;
    queue<int> q2;
    public:
    void push(int val)
    {
        if(N<1)
        {
            q1.push(val); //In this case q2 not required
            N++;
            return;
        }
        q2.push(val);
        N++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> tempQ=q2;//To interchange queues q1 and q2
        q2=q1;
        q1=tempQ;
    }

    void pop()
    {
        if(q1.empty())
        {
            cout<<"Empty Stack!";
            return;
        }
        q1.pop();
        N--;
    }

    int top()
    {
        if(q1.empty())
        {
            cout<<"Empty Stack!";
            return -1;
        }
        return q1.front();
    } 

    int size()
    {
        return N;
    }

    bool empty()
    {
        if(q1.empty())
        {
            return 1;
        }
        return 0;
    }

};

int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    cout<<s.top();
    return 0;
}
